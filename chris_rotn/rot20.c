#include "rotn.h"

void	rot20(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F'))
			str[i] = str[i] + 20;
		if ((str[i] <= 'z' && str[i] >= 'g' ) || (str[i] <= 'Z' && str[i] >= 'G'))
			str[i] = str[i] - 6;
		ft_putchar(str[i]);
		i++;
	}
}
