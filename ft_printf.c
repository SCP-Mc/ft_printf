#include "ft_printf.h"

int desolve(const char *format, int i, va_list arg_ptr)
{
    if(format[i] == '%')
        return(ft_putchar('%'));
    else if(format[i] == 'c')
        return(ft_putchar((char)va_arg(arg_ptr, int)));
    else if(format[i] == 's')
        return(ft_putstr((char *)va_arg(arg_ptr, char *)));
    else if(format[i] == 'd')
        return(ft_putnbr(va_arg(arg_ptr, int)));
    else if(format[i] == 'u')
        return(ft_putunbr(va_arg(arg_ptr, unsigned int)));
    else if(format[i] == 'x' || format[i] == 'X')
        return(ft_puthex((unsigned int)va_arg(arg_ptr, int), format[i]));
    else if (format[i] == 'p')
		return (ft_putptr((unsigned long)va_arg(arg_ptr, void *)));
    return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	arg_ptr;

	i = 0;
	count = 0;
	va_start(arg_ptr, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			count += ft_putchar(format[i]);
			i++;
		}
		else
		{
			count += desolve(format, i + 1, arg_ptr);
			i += 2;
		}
	}
	va_end(arg_ptr);
	return (count);
}
