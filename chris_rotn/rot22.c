#include "rotn.h"

void	rot22(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'd') || (str[i] >= 'A' && str[i] <= 'D'))
			str[i] = str[i] + 22;
		if ((str[i] <= 'z' && str[i] >= 'e' ) || (str[i] <= 'Z' && str[i] >= 'E'))
			str[i] = str[i] - 4;
		ft_putchar(str[i]);
		i++;
	}
}
