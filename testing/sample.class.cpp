#include "sample.class.hpp"

Sample::Sample(char p1, int p2, float p3) : a2(p2), a3(p3){
    std::cout << "Construct " << this << std::endl;
    this->foo = 42;
    this->a1 = p1;
    return ;
}

Sample::~Sample(void){
    std::cout << "Destruct" << std::endl;
    return ;
}

void Sample::bar(void){
    std::cout << "hey im alive!" << std::endl;
    return ;
}