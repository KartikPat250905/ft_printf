#include "libftprintf.h"

void	ft_putstr_address(t_out *strutil,char *s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		if(strutil->error == -1)
			return;
		ft_putchar(s[i],strutil);
		strutil->total++;
		i++;
	}
}

void	ft_putaddress(t_out *strutil,unsigned long int address)
{
	ft_putstr_address(strutil,"0x");
	ft_printf("%x",address);
}


void	ft_printaddress_buf(t_out *strutil,va_list ap)
{
	void	*ptr = va_arg(ap,void*);

	if((char *)ptr == NULL)
	{
		ft_putstr_address(strutil,"0x0");
		strutil->strindex += 2;
		return;
	}
	unsigned long int	address = (unsigned long int)ptr;
	ft_putaddress(strutil,address);
	strutil->strindex += 2;
}
