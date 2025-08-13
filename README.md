# Hello guys.! l.m presetn my Hello Window (C).!

## Git Copy Repo the PC:
```
git clone https://github.com/EzerTheKing/Hello-Window-C-.git
```
## Installing Packages.
Sorry user Windows, i love Linux.:) (͡° ͜ʖ ͡°)

Linux:
```
Arch/Artix: sudo pacman -S clang bazel glfw mesa glfw-wayland wayland wayland-protocols libxkbcommon (I RECOMEND) -> {zed(minimal code editor) hyperland(Linux)}

NixOS: environment.systemPackages = with pkgs; [
    glfw-wayland
    glfw
    clang
    bazel
    wayland
    wayland-protocols
    libxkbcommon
  ];
```

## Build Code:
```
bazel query //:*

bazel build //...
```
## Result:
```
Hello Window, Bro.! ☜(ˆ▿ˆc)
```
