#!/bin/bash

set -e

echo "Running FastComments C++ SDK tests..."

# Create build directory if it doesn't exist
if [ ! -d "build" ]; then
  echo "Creating build directory..."
  mkdir -p build
fi

cd build

# Configure with CMake
echo "Configuring with CMake..."
cmake ..

# Build the tests
echo "Building tests..."
make

# Run the tests
echo ""
echo "Running tests..."
ctest --output-on-failure

echo ""
echo "✓ All tests passed!"
