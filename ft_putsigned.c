
#include "ft_printf.h"

void	ft_putsigned(unsigned int nb, int *count)
{
	if (nb >= 10)
		ft_putnbr(nb / 10, count);
	*count += ft_putchar((nb % 10) + 48);
}
