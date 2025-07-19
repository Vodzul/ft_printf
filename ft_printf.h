/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facelik <facelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:47:46 by facelik           #+#    #+#             */
/*   Updated: 2025/07/17 21:09:07 by facelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	detectformat(va_list arg, char c);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(long nb);
int	ft_putsigned(unsigned int nb);
int	ft_puthex(unsigned long nb, int c);
int	ft_putptr(unsigned long ptr);

#endif