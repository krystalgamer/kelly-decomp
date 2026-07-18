extern bool llc_available;
__asm__(".equ llc_available, 0x0040E420");

void low_level_console_release() {
    llc_available = false;
}
