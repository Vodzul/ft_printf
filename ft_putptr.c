/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facelik <facelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:47:46 by facelik           #+#    #+#             */
/*   Updated: 2025/07/17 21:09:07 by facelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
