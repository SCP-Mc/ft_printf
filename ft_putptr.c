#include"ft_printf.h"

int ft_putptr(unsigned long n)
{
    int i;
    int total;
    char *base;
    char output[16];

    i = 0;
    base = "0123456789abcdef";
    if(n == 0)
        return(write(1,"0x0", 1));
    while (n > 0)
    {
        output[i++] = base[n % 16];
		n /= 16;
    }
    total = ft_putstr("0x");
    while(--i >= 0)
        total += write(1,&output[i], 1);
    return(total);
}