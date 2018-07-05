# python3-bazel
Bazel support for building Python 3 with prebuilt libs for mac, windows and linux.

## How To Use

Add this to your `WORKSPACE` file:

```py
http_archive(
    name = "python3",
    url = "https://github.com/evanmoran/python3-bazel/archive/v3.6.4.tar.gz",
    strip_prefix = "python3-bazel-3.6.4",
)
```

Then add `@python3//:<platform>-python-library` to the `deps` to rules, like:

```py
cc_binary(
    name = "myapp",
    srcs = ["myapp.cpp"],
    deps = ["@python3//:<platform>-python-library"],
)
```
## Info

Supported platforms: macos, windows, linux

Supported languages: Python3

## Qt

In addition, this adds an include file called `python3.h`, that wraps the normal `Python.h` include so it can be included alongside qt. This is needed because qt and python both define a type called `slots` and it conflicts.







