
#include "ft_printf.h"

int	ft_putptr(unsigned long ptr)
{
	static int	count = 0;

	if (ptr == 0)
	{
		count += write(1, "(nil)", 5);
		return (count);
	}
	count += write(1, "0x", 2);
	count += ft_puthex(ptr, 'x');
	return (count);
}
