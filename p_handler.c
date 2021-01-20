/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 01:36:41 by jinbekim          #+#    #+#             */
/*   Updated: 2021/01/21 00:47:28 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexlen(unsigned long arg)
{
	int hexlen;

	hexlen = 0;
	while (arg)
	{
		hexlen++;
		arg /= 16;
	}
	return (hexlen);
}

static void	p_helper(char **ptr, unsigned long arg, int len, t_format *flags)
{
	if (arg != 0)
	{
		while (arg > 0)
		{
			(*ptr)[--len] = "0123456789abcdef"[arg % 16];
			arg /= 16;
		}
	}
	else if (flags->prec != 0)
		(*ptr)[--len] = '0';
	(*ptr)[--len] = 'x';
	(*ptr)[--len] = '0';
}

char		*p_handler(t_format *flags, unsigned long arg)
{
	char	*ptr;
	int		ptrlen;
	int		len;

	len = ft_hexlen(arg) + 2;
	if (flags->width < 3 && arg == 0 && flags->prec != 0)
		len++;
	ptrlen = flags->width > len ? flags->width : len;
	if (!(ptr = malloc(ptrlen + 1)))
		return (NULL);
	ptr[ptrlen] = '\0';
	ft_memset(ptr, ' ', ptrlen);
	if (flags->fill_blank == -1)
	{
		p_helper(&ptr, arg, ptrlen, flags);
	}
	else if (flags->fill_blank == ' ')
	{
		p_helper(&ptr, arg, len, flags);
	}
	return (ptr);
}
