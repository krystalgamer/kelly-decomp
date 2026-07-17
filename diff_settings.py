def apply(config, args):
    config["arch"] = "mipsee"
    config["baseimg"] = "SLUS_203.34.rom"
    config["myimg"] = "build/SLUS_203.34.rom"
    config["mapfile"] = "build/SLUS_203.34.map"
    config["source_directories"] = [
        "src",
        "asm",
        "include",
        "assets",
    ]
    config["make_command"] = ["ninja"]
    config["objdump_flags"] = ["-M", "no-aliases"]
    config["expected_dir"] = "expected"
