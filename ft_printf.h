/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:48:15 by jinbekim          #+#    #+#             */
/*   Updated: 2021/01/14 22:44:25 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

typedef	enum	e_bool
{
	false,
	true
}				t_bool;

typedef struct	s_format
{
	t_bool		leftalign;
	t_bool		zero;
	int			width;
	int			precision;
}				t_format;

int				g_nbr = 0;
int				ft_printf(const char *arg, ...);
int				flag_setter(const char *arg, va_list ap);
void			ft_putchar(int arg);
t_bool			is_minus(int arg, t_format *format);
t_bool			is_p_asterisk(int arg, t_format *format, va_list ap);
t_bool			is_precision(int arg, t_format *format);
t_bool			is_w_asterisk(char arg, t_format *format, va_list ap);
t_bool			is_width(int arg, t_format *format);
t_bool			is_zero(int arg, t_format *format);
int				put_char(t_format format, char arg);

#endif
