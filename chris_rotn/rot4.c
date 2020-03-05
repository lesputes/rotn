#include "rotn.h"

void	rot4(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'v') || (str[i] >= 'A' && str[i] <= 'V'))
			str[i] = str[i] + 4;
		if ((str[i] <= 'z' && str[i] >= 'w' ) || (str[i] <= 'Z' && str[i] >= 'W'))
			str[i] = str[i] - 22;
		ft_putchar(str[i]);
		i++;
	}
}
