#ifndef __STATISTICS_H__
#define __STATISTICS_H__

#include <iostream>

class Statistics{
public:
    Statistics(int par1, int par2);
    Statistics(Statistics const & seq);
    ~Statistics();
    int getX();
    int getY();
    float fun1();
    float fun2();
private:
    int par1;
    int par2;
};

#endif