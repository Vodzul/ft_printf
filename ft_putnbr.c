
#include "ft_printf.h"

int	ft_putnbr(long nb)
{
	static int	count = 0;

	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	count += ft_putchar((nb % 10) + 48);
	return (count);
}
