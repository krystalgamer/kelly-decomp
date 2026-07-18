class IconChallenge { public: class Icon; class Task { Icon* icon; bool completed; int type; bool watchChain; public: enum TYPE { TYPE_ZERO }; void Init(Icon* value, TYPE task_type); }; };
void IconChallenge::Task::Init(Icon* value, TYPE task_type) { icon = value; type = task_type; completed = false; watchChain = false; }
