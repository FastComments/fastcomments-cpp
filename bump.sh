#!/bin/bash

set -e

if [ -z "$1" ]; then
  echo "Usage: ./bump.sh <new_version>"
  echo "Example: ./bump.sh 0.0.2"
  exit 1
fi

NEW_VERSION=$1

echo "Bumping version to $NEW_VERSION..."

# Update config.json
jq ".packageVersion = \"$NEW_VERSION\"" config.json > config.json.tmp && mv config.json.tmp config.json

echo "✓ Updated config.json packageVersion to $NEW_VERSION"
echo "Done! Version bumped to $NEW_VERSION"
