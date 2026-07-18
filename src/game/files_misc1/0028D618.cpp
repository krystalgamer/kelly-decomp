struct trigger { char padding[0x18]; trigger* next; };
class trigger_manager { char padding[0x10]; trigger* head; public: void add(trigger* value); };
void trigger_manager::add(trigger* value) { value->next = head; head = value; }
