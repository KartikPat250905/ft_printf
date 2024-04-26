/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karpatel <karpatel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:58:25 by karpatel          #+#    #+#             */
/*   Updated: 2024/04/15 15:58:31 by karpatel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar_buf(t_out *strutil,va_list ap)
{
	int c = va_arg(ap,int);
	write(1, &c, 1);
	strutil->strindex += 2;
	strutil->total++;
}
