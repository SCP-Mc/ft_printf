#include"ft_printf.h"

int	len(unsigned int nbr)
{
	int	total;

	total = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		total += 1;
		nbr /= 10;
	}
	return (total);
}

int	ft_putunbr(unsigned int nbr)
{
	unsigned int	num;

	if (nbr >= 10)
		ft_putunbr(nbr / 10);
	num = nbr % 10 + '0';
	write(1, &num, 1);
	return (len(nbr));
}