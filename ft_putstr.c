#include"ft_printf.h"

int ft_putstr(char *s)
{
    int i;
    
    i = 0;
    if (!s[i])
        return (write(1, "(null)", 6));
    while(s[i])
        {
            write(1, s, 1);
            i++;
        }
    return(i);
}