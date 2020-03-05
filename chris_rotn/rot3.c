#include "rotn.h"

void	rot3(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'w') || (str[i] >= 'A' && str[i] <= 'W'))
			str[i] = str[i] + 3;
		if ((str[i] <= 'z' && str[i] >= 'x' ) || (str[i] <= 'Z' && str[i] >= 'X'))
			str[i] = str[i] - 23;
		ft_putchar(str[i]);
		i++;
	}
}
