#!/bin/sh

bazel-bin/app/app "$@" || echo "run error code: $?"
