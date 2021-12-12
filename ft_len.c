/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcharouh <mcharouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 03:27:22 by mcharouh          #+#    #+#             */
/*   Updated: 2021/12/12 04:07:26 by mcharouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_write(int nb)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
	else if (nb > 9)
	{
		ft_write(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
		ft_write(nb);
	}
}
