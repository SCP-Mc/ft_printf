#include"ft_printf.h"

int ft_putstr(char *s)
{
    int i;
    
    i = 0;
    if (!s)
        return (write(1, "(null)", 6));
    while(s[i])
        i += write(1, &s[i], 1);
    return(i);
}