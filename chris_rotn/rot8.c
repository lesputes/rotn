#include "rotn.h"

void	rot8(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'r') || (str[i] >= 'A' && str[i] <= 'R'))
			str[i] = str[i] + 8;
		if ((str[i] <= 'z' && str[i] >= 's' ) || (str[i] <= 'Z' && str[i] >= 'S'))
			str[i] = str[i] - 18;
		ft_putchar(str[i]);
		i++;
	}
}
