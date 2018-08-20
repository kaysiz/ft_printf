#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include "includes/libft.h"
# include <string.h>
# include <stdarg.h>

void	print_hex(int n, char c);
int		ft_printf(const char *format, ...);
#endif
