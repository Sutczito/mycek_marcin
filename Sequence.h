#ifndef __SEQUENCE_H__
#define __SEQUENCE_H__

#include <iostream>

class Sequence{
public:
    Sequence(int par1, int par2);
    Sequence(Sequence const & seq);
    ~Sequence();
    int getX();
    int getY();
    float fun1();
    float fun2();
private:
    int par1;
    int par2;
};

#endif