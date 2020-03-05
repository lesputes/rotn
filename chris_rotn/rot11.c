#include "rotn.h"

void	rot11(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'o') || (str[i] >= 'A' && str[i] <= 'O'))
			str[i] = str[i] + 11;
		if ((str[i] <= 'z' && str[i] >= 'p' ) || (str[i] <= 'Z' && str[i] >= 'P'))
			str[i] = str[i] - 15;
		ft_putchar(str[i]);
		i++;
	}
}
