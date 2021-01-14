/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 19:25:12 by jinbekim          #+#    #+#             */
/*   Updated: 2021/01/14 22:44:52 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

extern int	g_nbr;

/*
** if func cant print any specific, should return -1
*/

int			put_char(t_format format, char arg)
{
	char	*arr;
	int		i;

	i = 0;
	if (!(arr = malloc(sizeof(char) * (format.width + 1))))
		return (0);
	arr[format.width] = '\0';
	if (format.leftalign == true)
	{
		ft_memset(arr, ' ', format.width);
		arr[0] = arg;
	}
	else if (format.zero == true)
	{
		ft_memset(arr, '0', format.width);
		arr[format.width - 1] = arg;
	}
	while (i < format.width)
	{
		ft_putchar(arr[i]);
		i++;
	}
	return (1);
}
