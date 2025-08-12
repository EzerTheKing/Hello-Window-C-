cc_binary(
    name = "glfw_hello",
    srcs = ["code/base.c"],
    copts = [
        "-Wall",
        "-Wextra",
        "-O2",
    ],
    linkopts = select({
        "@bazel_tools//src/conditions:linux_x86_64": [
            "-lglfw",
            "-lGL",
            "-ldl",
            "-lpthread",
            "-lm",
            # Wayland Lib
            "-lwayland-client",
            "-lwayland-egl",
            "-lwayland-cursor",
            "-lxkbcommon",
        ],
        "//conditions:default": [],
    }),
)
