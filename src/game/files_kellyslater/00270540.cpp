class MenuEntry { public: int MenuText(char* text, int length); };
int MenuEntry::MenuText(char* text, int length) { if (length > 0) *text = 0; return 0; }
