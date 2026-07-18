class trail { void* resource; public: void destroy(); };
void trail::destroy() { if (resource) resource = 0; }
