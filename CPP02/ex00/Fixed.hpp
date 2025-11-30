#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

private:
	const static int	bits;
	int					val;

public:
	Fixed();
	Fixed(const Fixed &src);
	Fixed &operator=(const Fixed &rhs);
	~Fixed();

	int		getRawBits(void);
	void	setRawBits(int const raw);

};

#endif // FIXED_HPP
