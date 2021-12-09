#include"ft_printf.h"

void	Fwrite(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb >= 0 && nb <= 9)
		Fwrite(nb + '0');
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		Fwrite((nb % 10) + '0');
	}
	else if (nb < 0)
	{
		Fwrite('-');
		nb = nb * (-1);
		ft_putnbr(nb);
	}
    return (nb);
}