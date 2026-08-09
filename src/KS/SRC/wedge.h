#ifndef WEDGE_H
#define WEDGE_H

typedef unsigned short wedge_ref;

class wedge {
public:
    wedge()
      : level_of_detail(0)
    {
    }

    short level_of_detail;
    wedge_ref lower_detail;
};

#endif
