#!/usr/bin/env bash
set -eo pipefail

# Set the directory where files are located
directory="./standard-armv7l/home/abuild/rpmbuild/SRPMS"

# Check if the directory exists
if [ ! -d "$directory" ]; then
    echo "Error: Directory not found."
    exit 1
fi

for file in "$directory"/*; do
    # Check if the file is larger than 20MiB
    if [ -f "$file" ] && [ "$(stat -c%s "$file")" -gt $((20 * 1024 * 1024)) ]; then
        # Split the file into chunks of 20MiB
        echo "Splitting $file..."
        split --bytes=20M --numeric-suffixes --suffix-length=2 "$file" "$file.part"
        echo "Splitting $file complete, removing."
        rm "$file"
    else
        echo "Skipping $file (smaller than 20MiB)."
    fi
done

echo "Splitting process complete."
