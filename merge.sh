#!/usr/bin/env bash
set -eo pipefail

directory="./standard-armv7l/home/abuild/rpmbuild/SRPMS"

# Check if the directory exists
if [ ! -d "$directory" ]; then
    echo "Error: Directory not found."
    exit 1
fi

# Create an array to store part files
part_files=("$directory"/*part*)

# Check if there are part files to merge
if [ ${#part_files[@]} -eq 0 ]; then
    echo "No part files found for merging."
    exit 0
fi

# Sort part files based on numerical suffix
sorted_files=($(echo "${part_files[@]}" | tr ' ' '\n' | sort -t '.' -k2 -n))

# Iterate through sorted part files and concatenate them back to source files
for part_file in "${sorted_files[@]}"; do
    # Extract the source file name from the part file
    source_file="${part_file%.*}"

    if [ ! -f "$source_file" ]; then
        touch "$source_file"
    fi

    echo "Merging $part_file into $source_file..."
    cat "$part_file" >> "$source_file"
    echo "Merging $part_file complete."

    # Remove the part file
    rm "$part_file"
done

echo "Merging process complete."
