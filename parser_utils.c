#include "libft/libft.h"
#include <stdlib.h>

void	*handle_error(char *message, int err_type)
{
	ft_putstr_fd("Error!\n", 2);
	if (message)
	{
		ft_putchar_fd("Error Message: ", 2);
		ft_putstr_fd(message, 2);
		ft_putchar_fd("\n", 2);
	}
	if (err_type == 0)
		exit(EXIT_FAILURE);
	else
		return (NULL);
}