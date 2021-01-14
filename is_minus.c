/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isminus.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 03:45:38 by jinbekim          #+#    #+#             */
/*   Updated: 2021/01/14 03:49:54 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool		isminus(char arg, t_format *format)
{
	if (arg == '-')
	{
		format->leftalign = true;
		format->zero = false;
		return (true);
	}
	return (false);
}
