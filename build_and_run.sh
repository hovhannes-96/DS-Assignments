#!/bin/bash

set -e
DIR="$(dirname "$(readlink -f "$0")")"

TARGETS=("ForwardList" "Heap" "List" "MergeSortWithIterators" "RationalNumber" "Set" "Vector")
for target in "${TARGETS[@]}"; do
    echo -e "\nBuilding $target..."
    BUILD_DIR=$DIR/$target/build
    mkdir -p "$BUILD_DIR"
    cd "$BUILD_DIR"
    cmake ..
    make
    ./"$target"
    cd -
done
