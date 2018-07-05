# python3-bazel
Bazel support for building Python 3 with prebuilt libs for mac, windows and linux.

## Info

Supported platforms: macos, windows, linux

Supported languages: Python3

## Qt

In addition, this adds an include file called `python3.h`, that wraps the normal `Python.h` include so it can be included alongside qt. This is needed because qt and python both define a type called `slots` and it conflicts.







