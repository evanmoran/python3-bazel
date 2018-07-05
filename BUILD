
# Latest

LATEST_VERSION = "3.6.4"
LATEST_DOT_VERSION =  "3.6"
LATEST_JOIN_VERSION =  "36"

MAC_LATEST = "mac/v" + VERSION + "/"
WIN_LATEST = "windows/" + VERSION + "/"

cc_library(
    name = "mac-python-library",
    srcs = [MAC_LATEST + "lib/libpython" + LATEST_DOT_VERSION + "m.a"],
    hdrs = glob([MAC_LATEST + "include/python" + LATEST_DOT_VERSION + "m/**/*.h"]),
    strip_include_prefix = MAC_LATEST + "include/python" + LATEST_DOT_VERSION + "m",
    visibility = ["//visibility:public"],
    linkopts = ["-v"]
)
cc_library(
    name = "windows-python-library",
    srcs = [WIN_LATEST + "libs/python" + LATEST_JOIN_VERSION + ".lib"],
    hdrs = glob([WIN_LATEST + "include/**/*.h"]),
    strip_include_prefix = WIN_LATEST + "include/python" + LATEST_DOT_VERSION + "m",
    visibility = ["//visibility:public"]
)

# 3-6-4

JOINED_36 = "36"
DOT_36 = "3.6"
MAC_364 = "mac/v3.6.4/"
WIN_364 = "windows/v3.6.4/"
LX_364 = "windows/v3.6.4/"

cc_library(
    name = "mac-python-library-3-6-4",
    srcs = [MAC_364 + "lib/libpython" + DOT_36 + "m.a"],
    hdrs = glob([MAC_364 + "include/python" + DOT_36 + "m/**/*.h"]),
    strip_include_prefix = MAC_364 + "include/python" + DOT_36 + "m",
    visibility = ["//visibility:public"],
    linkopts = ["-v"]
)
cc_library(
    name = "windows-python-library",
    srcs = [WIN_364 + "libs/python" + JOIN_36 + ".lib"],
    hdrs = glob([WIN_364 + "include/**/*.h"]),
    strip_include_prefix = WIN_364 + "include/python" + DOT_36 + "m",
    visibility = ["//visibility:public"]
)
