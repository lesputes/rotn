#include "rotn.h"

void	rot7(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 's') || (str[i] >= 'A' && str[i] <= 'S'))
			str[i] = str[i] + 7;
		if ((str[i] <= 'z' && str[i] >= 't' ) || (str[i] <= 'Z' && str[i] >= 'T'))
			str[i] = str[i] - 19;
		ft_putchar(str[i]);
		i++;
	}
}
