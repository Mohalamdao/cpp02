#include "Fixed.hpp"
#include <cmath>       

Fixed::Fixed() : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        _fixedPointValue = rhs._fixedPointValue;
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const n) {
    std::cout << "Int constructor called" << std::endl;
    _fixedPointValue = n << _fractionalBits;          
}

Fixed::Fixed(float const f) {
    std::cout << "Float constructor called" << std::endl;
    _fixedPointValue = static_cast<int>(roundf(f * (1 << _fractionalBits)));
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    _fixedPointValue = raw;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(_fixedPointValue) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return _fixedPointValue >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& os, Fixed const& value) {
    os << value.toFloat();
    return os;
}