#include "rotn.h"

void	rot25(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == 'a') || (str[i] == 'A'))
			str[i] = str[i] + 25;
		if ((str[i] <= 'z' && str[i] >= 'b' ) || (str[i] <= 'Z' && str[i] >= 'B'))
			str[i] = str[i] - 1;
		ft_putchar(str[i]);
		i++;
	}
}
