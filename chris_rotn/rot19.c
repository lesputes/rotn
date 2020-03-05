#include "rotn.h"

void	rot19(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'g') || (str[i] >= 'A' && str[i] <= 'G'))
			str[i] = str[i] + 19;
		if ((str[i] <= 'z' && str[i] >= 'h' ) || (str[i] <= 'Z' && str[i] >= 'H'))
			str[i] = str[i] - 7;
		ft_putchar(str[i]);
		i++;
	}
}
