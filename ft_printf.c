/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 17:35:18 by ksiziva           #+#    #+#             */
/*   Updated: 2018/08/05 09:19:13 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	int			j;

	i = 0;
	j = 0;
	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i+1] == '\0') {
				return(-1);
			}
			if (format[i+1] == 's') {
				ft_putstr(va_arg(args, char *));
			}
			if (format[i+1] == 'i') {
				ft_putnbr(va_arg(args, int));
			}
			if (format[i+1] == 'd') {
				ft_putstr("signed int\n");
			}
			if (format[i+1] == '%') {
				ft_putstr("%");
			}
			// if (format[i+1] == 'u') {
			// 	write(1, ,);
			// }
			// if (format[i+1] == 'U') {
			// 	write(1, ,);
			// }
			// if (format[i+1] == 'x') {
			// 	write(1, ,);
			// }
			// if (format[i+1] == 'X') {
			// 	write(1, ,);
			// }
			// if (format[i+1] == 'c') {
			// 	write(1, ,);
			// }
			// if (format[i+1] == 'C') {
			// 	write(1, ,);
			// }
			// if (format[i+1] == 'i') {
			// 	write(1, ,);
			// }
			// if (format[i+1] == 'p') {
			// 	write(1, ,);
			// }
			// if (format[i+1] == 'o') {
			// 	write(1, ,);
			// }
			// if (format[i+1] == 'O') {
			// 	write(1, ,);
			// }
		}
		// if (!format[i] || (format[i] == '%' && ft_undef(format, i + 1) == 0))
		// 	return (j);
		// format[i] == '%' && format[i + 1] == '\0' ? j-- : 0;
		// format[i] == '%' ? 0 : ft_putchar(format[i]);
		// if (format[i] == '%' && format[i + 1] && ft_undef(format, i + 1)
		// 	&& (i = ft_printf_conv((char *)format, &pa, &j, i + 1)) == -1)
		// 	return (-1);
		i++;
		j++;
	}
	va_end(args);
	return (j);
}

int main ()
{
	ft_printf("%s%i","kuda",243);
	return (0);
}
