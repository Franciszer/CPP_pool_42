#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(int const val);
		Fixed(float const val);
		~Fixed(void);

		Fixed				&operator=(Fixed const &src);
		static const int    fractional_bits;
		int					getRawBits(void) const;
		void 				setRawBits( int const raw );
		float 				toFloat(void) const;
		int 				toInt(void) const;
		Fixed				operator+(Fixed const rha);
		Fixed				operator-(Fixed const rha);
		Fixed				operator*(Fixed const rha);
		Fixed				operator/(Fixed const rha);
		bool				operator!=(Fixed const rha);
		bool				operator>(Fixed const rha);
		bool				operator>=(Fixed const rha);
		bool				operator<(Fixed const rha);
		bool				operator<=(Fixed const rha);
	
	private:
		int		_value;
};

std::ostream		&operator<<(std::ostream &os, Fixed const &fixedPoint);

#endif
