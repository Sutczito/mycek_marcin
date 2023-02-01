#ifndef __STATISTICS_H__
#define __STATISTICS_H__

#include <iostream>
//! \brief tabela wartości
//! | Column 1 | Column 2 | Column 3 |
//! |----------|----------|----------|
//! | Row 1, Column 1 | Row 1, Column 2 | Row 1, Column 3 |
//! | Row 2, Column 1 | Row 2, Column 2 | Row 2, Column 3 |
//! | Row 3, Column 1 | Row 3, Column 2 | Row 3, Column 3 |

class Statistics{
public:
    Statistics(int par1, int par2);
    Statistics(Statistics const & seq);
    ~Statistics();
    int getX();
    int getY();
    //! [Wykres elementów skończonych](https://i.imgur.com/EKruG7W.png)
    float fun1();
    float fun2();
private:
    int par1;
    int par2;
};

#endif