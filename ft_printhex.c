#include "libftprintf.h"

void	print_hexcalc(unsigned long int n, t_out *strutil);

void	ft_putchar_hex(char c,t_out *strutil)
{
	write(1, &c, 1);
	strutil->total++;
}

void	print_hexcalc(unsigned long int n, t_out *strutil)
{
	long	nb;
	char	*base = "0123456789abcdef";

	nb = n;
	if (nb < 0)
	{
		nb *= -1;
	}
	if (nb >= 16)
		print_hexcalc(nb / 16, strutil);
	ft_putchar_hex(*(base + (nb % 16)),strutil);
}

int	ft_printhex(t_out *strutil,va_list ap)
{
	unsigned long int	num;

	num = va_arg(ap,unsigned long int);
	print_hexcalc(num,strutil);
	if (strutil->error == -1)
		return (-1);
	strutil->strindex += 2;
	return (0);
}
