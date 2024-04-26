#include "libftprintf.h"

void	PrintX(unsigned long int n, t_out *strutil);

void	ft_putchar_X(char c,t_out *strutil)
{
	if(strutil->error == -1)
		return;
	if(write(1, &c, 1) == -1)
		strutil->error = -1;
	else
		strutil->total++;
}

void	PrintX(unsigned long int n, t_out *strutil)
{
	long	nb;
	char	*base = "0123456789ABCDEF";

	nb = n;
	if (nb < 0)
	{
		nb *= -1;
	}
	if (nb >= 16)
		PrintX(nb / 16, strutil);
	ft_putchar_X(*(base + (nb % 16)),strutil);
}

void	ft_printX(t_out *strutil,va_list ap)
{
	unsigned long int	num;

	num = va_arg(ap,unsigned long int);
	PrintX(num,strutil);
	strutil->strindex += 2;
}
