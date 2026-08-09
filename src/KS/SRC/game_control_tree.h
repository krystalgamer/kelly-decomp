#ifndef GAME_CONTROL_TREE_H
#define GAME_CONTROL_TREE_H

struct game_control {
};

struct game_control_node {
    int color;
    game_control_node *parent;
    game_control_node *left;
    game_control_node *right;
    int key;
    game_control value;
};

struct game_control_iterator {
    game_control_node *current;
};

class game_control_tree {
public:
    game_control_node *header;
};

#endif
