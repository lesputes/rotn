#include "rotn.h"

void	rot15(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'k') || (str[i] >= 'A' && str[i] <= 'K'))
			str[i] = str[i] + 15;
		if ((str[i] <= 'z' && str[i] >= 'l' ) || (str[i] <= 'Z' && str[i] >= 'L'))
			str[i] = str[i] - 11;
		ft_putchar(str[i]);
		i++;
	}
}
