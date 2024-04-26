/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karpatel <karpatel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:58:46 by karpatel          #+#    #+#             */
/*   Updated: 2024/04/15 16:01:20 by karpatel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar(char c,t_out *strutil)
{
	if (write(1,&c,1) == -1)
		strutil->error = -1;
}

void	ft_putstr_buf(t_out *strutil,va_list ap)
{
	int	i;
	char	*s = va_arg(ap,char *);

	i = 0;
	if (!s)
	{
		strutil->total += 6;
		write(1,"(null)",6);
		strutil->strindex += 2;
		return;
	}
	while (s[i])
	{
		ft_putchar(s[i],strutil);
		strutil->total++;
		i++;
	}
	strutil->strindex+=2;
}
