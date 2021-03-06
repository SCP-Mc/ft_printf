/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 01:27:26 by mcharouh          #+#    #+#             */
/*   Updated: 2021/12/12 04:18:37 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	ft_write(nb);
	if (nb < 0)
		i++;
	while (nb || i == 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}
