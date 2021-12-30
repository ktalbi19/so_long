#include <stdio.h>

int	error(char *message)
{
	printf("\033[0;31" "Error\n %s \n" "\033[0m", message);
	return (0);
}

void	*null_error(char *message)
{
	printf("\033[0;31" "Error\n %s \n" "\033[0m", message);
	return (0);
}
