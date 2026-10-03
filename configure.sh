#!/bin/sh
set -eu
case "${1:-x86_64}" in x86_64|arm64) printf 'MASKCOUT_ARCH=%s\n' "$1" > .config;; *) echo 'usage: ./configure.sh [x86_64|arm64]' >&2; exit 2;; esac
