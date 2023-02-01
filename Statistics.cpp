#include <iostream>
#include "statistics.h"

Statistics::Statistics(int x, int y){
    this->par1 = x;
    this->par2 = y;
}

Statistics::Statistics(Statistics const & seq){
    this->par1 = seq.par1;
    this->par2 = seq.par2;
}

Statistics::~Statistics(){
   std::cout << "obiekt zniszczony" << std::endl;
}

int Statistics::getX(){
    return par1;
}

int Statistics::getY(){
    return par2;
}

int Statistics::fun1(){
    return par1+par2;
}

int Statistics::fun2(){
    return par1-par2;
}