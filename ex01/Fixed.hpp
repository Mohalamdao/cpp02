#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int                 _fixedPointValue;                 
    static const int    _fractionalBits = 8;              
public:
    Fixed();                             
    Fixed(const Fixed& other);           
    Fixed& operator=(const Fixed& rhs);  
    ~Fixed();                            
    explicit Fixed(int const n);         
    explicit Fixed(float const f);       
    int   getRawBits(void)  const;
    void  setRawBits(int const raw);
    float toFloat(void) const;
    int   toInt(void)   const;
};
std::ostream& operator<<(std::ostream& os, Fixed const& value);

#endif