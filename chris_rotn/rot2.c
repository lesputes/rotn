#include "rotn.h"

void	rot2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'x') || (str[i] >= 'A' && str[i] <= 'X'))
			str[i] = str[i] + 2;
		if ((str[i] <= 'z' && str[i] >= 'y' ) || (str[i] <= 'Z' && str[i] >= 'Y'))
			str[i] = str[i] - 24;
		ft_putchar(str[i]);
		i++;
	}
}
