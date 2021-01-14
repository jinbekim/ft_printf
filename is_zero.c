/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iszero.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 03:50:26 by jinbekim          #+#    #+#             */
/*   Updated: 2021/01/14 03:58:17 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool		iszero(char arg, t_format *format)
{
	if (arg == '0')
	{
		format->zero = true;
		return (true);
	}
	return (false);
}
