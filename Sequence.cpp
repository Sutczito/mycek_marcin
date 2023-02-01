#include <iostream>
#include "sequence.h"

Sequence::Sequence(int x, int y){
    this->par1 = x;
    this->par2 = y;
}

Sequence::Sequence(Sequence const & seq){
    this->par1 = seq.par1;
    this->par2 = seq.par2;
}

Sequence::~Sequence(){
   std::cout << "obiekt zniszczony" << std::endl;
}

int Sequence::getX(){
    return par1;
}

int Sequence::getY(){
    return par2;
}

int Sequence::fun1(){
    return par1+par2;
}

int Sequence::fun2(){
    return par1-par2;
}