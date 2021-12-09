#include"ft_printf.h"

int put_hex(unsigned int n, char input)
{
    int i;
    int total;
    char *base;
    char output[16];

    if (input == 'x')
        base = "0123456789abcdef";
    else if (input == 'X')
        base = "0123456789ABCDEF";
    i = 0;
    if (n == 0)
        return (write(1 ,"0", 1));
    while(n > 0)
    {
        output[i++] = base[n % 16];
        n /= 16;
    }
    total = 0;
    while(--i >= 0)
        total += write(1, &output[i] ,1);
    return(total);
}