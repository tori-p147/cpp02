#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_rawBits = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	_rawBits = copy.getRawBits();
}

Fixed::Fixed(int rawBits)
{
	std::cout << "Fields constructor called" << std::endl;
	_rawBits = rawBits;
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Assignment operator
Fixed & Fixed::operator=(const Fixed &assign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_rawBits = assign.getRawBits();
	return *this;
}

// Getter
int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _rawBits;
}

// Setter
void Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}
