
#include "ft_printf.h"

int	ft_puthex(unsigned long nb, int c)
{
	static int	count;
	char		*base;

	count = 0;
	base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (nb > 15)
		ft_puthex(nb / 16, c);
	count += ft_putchar(base[nb % 16]);
	return (count);
}
