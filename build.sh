#!/bin/sh

bazel --batch build --distdir=/bazel/dist -c opt //app:app
