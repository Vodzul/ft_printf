
#include "ft_printf.h"

void	ft_puthex(unsigned long nb, char c, int *count)
{
	char		*base;

	base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (nb > 15)
		ft_puthex(nb / 16, c, count);
	*count += ft_putchar(base[nb % 16]);
}
