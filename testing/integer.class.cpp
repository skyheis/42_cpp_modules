#include "integer.class.hpp"

Integer::Integer(int const n) : _n(n) {

}

Integer::~Integer(void) {

}

int    Integer::getValue(void) const {
    return this->_n;
}

Integer & Integer::operator=(Integer const & rhs) {
    this->_n = rhs.getValue();

    return *this;
}

Integer Integer::operator+(Integer const & rhs) const {
    return Integer( this->_n + rhs.getValue());
}

std::ostream& operator<<(std::ostream& o, Integer const& rhs) {
    o << rhs.getValue();
    return o;
}
