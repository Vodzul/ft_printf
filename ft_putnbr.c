
#include "ft_printf.h"

void	ft_putnbr(long nb, int *count)
{
	if (nb < 0)
	{
		*count += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10, count);
	*count += ft_putchar((nb % 10) + 48);
}
