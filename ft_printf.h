/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karpatel <karpatel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:24:07 by karpatel          #+#    #+#             */
/*   Updated: 2024/04/24 16:24:12 by karpatel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct s_main{
	int			total;
	const char	*str;
	int			strindex;
	int			totalargs;
	int			error;
}t_out;

typedef struct s_printf{
	va_list *ptr;
}t_vahelper;

int	ft_printf(const char *, ...);
int	num_args(const char * str);
int	isidentifier(const char *str,int i);
void	ft_putchar_buf(t_out *strutil,va_list ap);
void	ft_putstr_hex(char *s,t_out *strutil);
void	ft_printaddress_buf(t_out *strutil,va_list ap);
void	ft_putchar(char c,t_out *strutil);
int		ft_printhex(t_out *strutil,va_list ap);
void	ft_putstr_buf(t_out *strutil,va_list ap);
void	print_hexcalc(unsigned long int n, t_out *strutil);
void	ft_printint(t_out *strutil,va_list ap);
void	ft_printunsigned(t_out *strutil,va_list ap);
void	ft_printX(t_out *strutil,va_list ap);

#endif
