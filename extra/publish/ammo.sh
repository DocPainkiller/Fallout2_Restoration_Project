#!/bin/bash

set -xeu -o pipefail

release_dir="$(realpath $release_dir)"
scripts_dir="$release_dir/data/scripts"

mkdir -p "$scripts_dir"
7zr e "$mpack_7z" example_mods/AmmoMod/gl_ammomod.int
mv gl_ammomod.int "$release_dir/"

7zr e "$mpack_7z" example_mods/AmmoMod/AmmoGlovz.ini
7zr e "$mpack_7z" example_mods/AmmoMod/AmmoYAAM.ini
mv AmmoGlovz.ini "$release_dir/"
mv AmmoYAAM.ini "$release_dir/"
