/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 01:29:30 by mcharouh          #+#    #+#             */
/*   Updated: 2021/12/12 04:21:39 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putptr(unsigned long n)
{
	int		i;
	int		total;
	char	*base;
	char	output[16];

	i = 0;
	base = "0123456789abcdef";
	if (n == 0)
		return (write(1, "0x0", 3));
	while (n > 0)
	{
		output[i++] = base[n % 16];
		n /= 16;
	}
	total = write(1, "0x", 2);
	while (--i >= 0)
		total += write(1, &output[i], 1);
	return (total);
}
