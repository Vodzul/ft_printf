
#include "ft_printf.h"

void	ft_putptr(unsigned long ptr, int *count)
{
	if (ptr == 0)
	{
		*count += write(1, "(nil)", 5);
		return ;
	}
	*count += ft_putstr("0x");
	ft_puthex(ptr, 'x', count);
}
