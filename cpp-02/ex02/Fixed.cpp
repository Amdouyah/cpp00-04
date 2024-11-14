#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixed_p = 0;
}

Fixed::Fixed(const int x)
{
	this->fixed_p = x * ft_iterative_power(2, frac);
}
Fixed::Fixed(const float z)
{
	this->fixed_p = roundf(z * ft_iterative_power(2, frac));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &new_fixed)
{
	*this = new_fixed;
}



Fixed &Fixed::operator =(const Fixed &new_fixed)
{
	fixed_p = new_fixed.getRawBits();
	return *this;
}
Fixed &Fixed::operator +(const Fixed &new_fixed)
{
	fixed_p += new_fixed.getRawBits();
	return *this;
}
Fixed &Fixed::operator -(const Fixed &new_fixed)
{
	fixed_p -= new_fixed.getRawBits();
	return *this;
}
Fixed &Fixed::operator *(const Fixed &new_fixed)
{
	fixed_p *= new_fixed.getRawBits();
	return *this;
}
Fixed &Fixed::operator /(const Fixed &new_fixed)
{
	fixed_p /= new_fixed.getRawBits();
	return *this;
}



Fixed &Fixed::operator --(){
	--fixed_p;
	return *this;
}
Fixed &Fixed::operator ++(){
	++fixed_p;
	return *this;
}
Fixed Fixed::operator++(int){
    Fixed temp = *this;
    ++fixed_p;
    return temp;
}
Fixed Fixed::operator--(int){
    Fixed temp = *this;
    --fixed_p;
    return temp;
}


bool Fixed::operator <(const Fixed &new_fixed){
	return(fixed_p < new_fixed.getRawBits());
}
bool Fixed::operator >(const Fixed &new_fixed){
	return(fixed_p > new_fixed.getRawBits());
}
bool Fixed::operator <=(const Fixed &new_fixed){
	return(fixed_p <= new_fixed.getRawBits());
}
bool Fixed::operator >=(const Fixed &new_fixed){
	return(fixed_p >= new_fixed.getRawBits());
}
bool Fixed::operator ==(const Fixed &new_fixed){
	return(fixed_p == new_fixed.getRawBits());
}
bool Fixed::operator !=(const Fixed &new_fixed){
	return(fixed_p != new_fixed.getRawBits());
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
	return(a.getRawBits() < b.getRawBits()) ? a : b;
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
	return(a.getRawBits() < b.getRawBits()) ? a : b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b){
	return(a.getRawBits() > b.getRawBits()) ? a : b;
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
	return(a.getRawBits() > b.getRawBits()) ? a : b;
}

int Fixed::getRawBits() const
{
	return fixed_p;
}

void Fixed::setRawBits( int const raw )
{
	this->fixed_p = raw;
}
float Fixed::toFloat()const
{
	return (float)this->fixed_p / ft_iterative_power(2, frac);
};

int Fixed::toInt( void ) const
{
	return roundf(this->fixed_p / ft_iterative_power(2, frac));
}

std::ostream& operator<<(std::ostream& COUT, const Fixed &fixed)
{
	COUT << fixed.toFloat();
	return (COUT);
}