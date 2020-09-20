#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Fixed {
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed				&operator=(Fixed const &src);
		static const int    fractional_bits;
		int					getRawBits(void) const;
		void 				setRawBits( int const raw );
	private:
		int		_value;
};

#endif
