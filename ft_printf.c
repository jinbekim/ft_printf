/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:46:24 by jinbekim          #+#    #+#             */
/*   Updated: 2021/01/19 18:35:28 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int		ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, fmt);
	count = ft_handler(fmt, ap);
	va_end(ap);
	return (count);
}

/*
**bonus
**Manage one or more of the following conversions: nfge
**Manage one or more of the following flags: l ll h hh
**Manage all the following flags: ’# +’ (yes, one of them is a space)
*/
