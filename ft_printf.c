
#include "ft_printf.h"

int	detectformat(va_list arg, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (c == 'i' || c == 'd')
		count += ft_putnbr(va_arg(arg, int));
	else if (c == '%')
		count += ft_putchar('%');
	else if (c == 'p')
		count += ft_putptr(va_arg(arg, unsigned long));
	else if (c == 'u')
		count += ft_putsigned(va_arg(arg, unsigned int));
	else if (c == 'x' || c == 'X')
		count += ft_puthex(va_arg(arg, unsigned int), c);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
			count += ft_putchar(format[i]);
		else
			count += detectformat(args, format[++i]);
		i++;
	}
	va_end(args);
	return (count);
}
