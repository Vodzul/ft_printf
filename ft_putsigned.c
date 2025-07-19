
#include "ft_printf.h"

int	ft_putsigned(unsigned int nb)
{
	static int	count = 0;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	count += ft_putchar((nb % 10) + 48);
	return (count);
}
