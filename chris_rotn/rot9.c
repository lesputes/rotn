#include "rotn.h"

void	rot9(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'q') || (str[i] >= 'A' && str[i] <= 'Q'))
			str[i] = str[i] + 9;
		if ((str[i] <= 'z' && str[i] >= 'r' ) || (str[i] <= 'Z' && str[i] >= 'R'))
			str[i] = str[i] - 17;
		ft_putchar(str[i]);
		i++;
	}
}
