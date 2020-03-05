#include "rotn.h"

void	rot6(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 't') || (str[i] >= 'A' && str[i] <= 'T'))
			str[i] = str[i] + 6;
		if ((str[i] <= 'z' && str[i] >= 'U' ) || (str[i] <= 'Z' && str[i] >= 'U'))
			str[i] = str[i] - 20;
		ft_putchar(str[i]);
		i++;
	}
}
