#!/bin/sh
set -eu
case "${1:-x86_64}" in x86_64) exec make x86_64;; arm64) exec make arm64;; *) echo 'usage: ./build.sh [x86_64|arm64]' >&2; exit 2;; esac
