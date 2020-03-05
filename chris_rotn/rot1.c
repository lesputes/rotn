#include "rotn.h"

void	rot1(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
			str[i] = str[i] + 1;
		if ((str[i] == 'z') || (str[i] == 'Z'))
			str[i] = str[i] - 25;
		ft_putchar(str[i]);
		i++;
	}
}
