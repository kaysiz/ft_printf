#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include "includes/libft.h"
# include <string.h>
# include <stdarg.h>

void	print_hex_l(int n);
void	print_hex_u(int n);
int		ft_printf(const char *format, ...);

#endif
