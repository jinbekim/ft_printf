/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:46:24 by jinbekim          #+#    #+#             */
/*   Updated: 2021/01/14 22:47:39 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

extern int g_nbr;

/*
**The prototype of ft_printf should be int ft_printf(const char *, ...);
**You have to recode the libc’s printf function
**It must not do the buffer management like the real printf
**It will manage the following conversions: cspdiuxX%
**It will manage any combination of the following flags: ’-0.*’
**and minimum field width with all conversions
**It will be compared with the real printf
**You must use the command ar to create your librairy,
**using the command libtool is forbidden
*/

int		ft_printf(const char *arg, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, arg);
	while (arg[i] == '\0')
	{
		if (arg[i] == '%')
			i = flag_setter(&arg[i], ap);
		if (arg[i] == '\0')
			break ;
		ft_putchar(arg[i]);
		i++;
	}
	va_end(ap);
	return (g_nbr);
}

/*
**Manage one or more of the following conversions: nfge
**Manage one or more of the following flags: l ll h hh
**Manage all the following flags: ’# +’ (yes, one of them is a space)
*/
