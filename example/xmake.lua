add_rules("mode.debug", "mode.release")

add_requires("openmp")

target("example")
    add_packages("openmp")
    set_kind("binary")
    add_files("src/*.cpp")

