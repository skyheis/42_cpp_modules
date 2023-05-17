#include "sample.class.hpp"

int Sample::_ninst = 0;

Sample::Sample(void) : _z1(0) {
    return ;
}

Sample::Sample(char p1, int p2, float const p3) : a2(p2),  a4(123) {
    std::cout << "Construct " << this << std::endl;
    this->foo = 42;
    this->a1 = p1;
    Sample::_ninst++;

    return ;
}

Sample::Sample(Sample const & src) {
    *this = src;    
    return;
}


Sample::~Sample(void) {
    std::cout << "Destruct " << this << std::endl;
    Sample::_ninst--;
    return ;
}

void Sample::publbar(void) {
    std::cout << "hey im alive!" << std::endl;
    return ;
}

int Sample::getz1(void) const {
    return this->_z1;
}

void Sample::setz1(int i) {
    if (i >= 0)
        this->_z1 = i;
    return ;
}

int Sample::compare(Sample * other) {
    if (this->_z1 < other->getz1())
        return (-1);
    if (this->_z1 > other->getz1())
        return (1);

    return (0);
}

int Sample::getninst(void) {
    return Sample::_ninst;
}

//the const before {} dont allow to edit your variable
void Sample::_privbar(void) const {
    std::cout << "hi.. im so shy :c" << std::endl;
    return ;
}

void Sample::_foo(void) const {
    std::cout << this->_z1 << std::endl;
    return ;
}