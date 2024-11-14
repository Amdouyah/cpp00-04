#include "Fixed.hpp"

int	ft_iterative_power(int nb, int power)
{
	int	i = 1, res = 1;
	if (power < 0)
		return (0);
	else if (power > 0)
	{
		while (i <= power)
		{
			res = res * nb;
			i++;
		}
	}
	else
		return (1);
	return (res);
}

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}