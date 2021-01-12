/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 21:56:30 by jinbekim          #+#    #+#             */
/*   Updated: 2021/01/13 00:07:27 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

extern int g_nbr;

void		form_handler(const char *arg, va_list ap)
{
	if (*arg == '-' || *arg == '0')

}
