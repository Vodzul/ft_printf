/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facelik <facelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:45:52 by facelik           #+#    #+#             */
/*   Updated: 2025/07/17 21:09:07 by facelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	detectformat(va_list arg, char c, int *count)
{
	if (c == 'c')
		*count += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		*count += ft_putstr(va_arg(arg, char *));
	else if (c == 'i' || c == 'd')
		ft_putnbr((long )va_arg(arg, int), count);
	else if (c == '%')
		*count += ft_putchar('%');
	else if (c == 'p')
		ft_putptr(va_arg(arg, unsigned long), count);
	else if (c == 'u')
		ft_putsigned(va_arg(arg, unsigned int), count);
	else if (c == 'x' || c == 'X')
		ft_puthex(va_arg(arg, unsigned int), c, count);
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
			detectformat(args, format[++i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
