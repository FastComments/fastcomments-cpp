#!/bin/bash

rm -rf ./client

if wget -q http://localhost:3001/js/swagger.json -O ./openapi.json; then
    echo "Downloaded OpenAPI spec from running server"
    SPEC_FILE="./openapi.json"
else
    echo "Server not running, using existing OpenAPI spec"
    SPEC_FILE="./openapi.json"
fi

npx @openapitools/openapi-generator-cli generate \
    -i "$SPEC_FILE" \
    -g cpp-restsdk \
    -o ./client \
    -c config.json

echo "Generated C++ client in ./client"

if [ -d "build" ]; then
    rm -rf build
fi

mkdir build
cd build
cmake ..
make

if [ $? -eq 0 ]; then
    echo "✓ C++ SDK built successfully!"
else
    echo "✗ Build failed!"
    exit 1
fi
