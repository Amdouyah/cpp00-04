#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed{
	private:
		int fixed_p;
		static const int frac = 8;
	public:
		Fixed();
		Fixed(const int x);
		Fixed(const float x);
		Fixed(const Fixed &new_fixed);
		Fixed &operator =(const Fixed &new_fixed);
		Fixed &operator +(const Fixed &new_fixed);
		Fixed &operator -(const Fixed &new_fixed);
		Fixed &operator *(const Fixed &new_fixed);
		Fixed &operator /(const Fixed &new_fixed);

		Fixed &operator --();
		Fixed &operator ++();
		Fixed operator++(int);
		Fixed operator--(int);

		bool operator <(const Fixed &new_fixed);
		bool operator >(const Fixed &new_fixed);
		bool operator <=(const Fixed &new_fixed);
		bool operator >=(const Fixed &new_fixed);
		bool operator ==(const Fixed &new_fixed);
		bool operator !=(const Fixed &new_fixed);

		int getRawBits() const;
		void setRawBits( int const raw );
		float toFloat()const;
		int toInt( void ) const;
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);


		~Fixed();
};

int	ft_iterative_power(int nb, int power);
std::ostream& operator<<(std::ostream& COUT, const Fixed &fixed);

#endif