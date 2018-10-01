# makegen

`makegen` is a tool born out of my frustration with conventional Makefile generators. They all seemed enormously complex, designed to address every use-case ever imagined. Most of my C/C++ projects are much simpler than cmake or auto* expect, and I didn't want to spend my time dealing with syntax intricacies of those (and other) tools.

`makegen` creates a Makefile based on a simple configuration file, `makegen.json`. The configuration file is formatted as such:

```json
{
    "dirs": {
        "headers": ["./inc", "./headers"],
        "sources": ["./src", "./sources"]
    },
    "libs": ["boost-log", "boost-math"],
    "out": "bin/my-cool-project",
    "flags": "-std=c++11 -L./lib"
}
```

A sample project using `makegen` can be found in `/sample`.

To run `makegen`, you have to be in the same directory as `makegen.json`.

If you have feature requests or bug reports for `makegen`, please [post them as an issue](https://github.com/aldahick/makegen/issues).
