#include "rotn.h"

void	rot14(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'l') || (str[i] >= 'A' && str[i] <= 'L'))
			str[i] = str[i] + 14;
		if ((str[i] <= 'z' && str[i] >= 'm' ) || (str[i] <= 'Z' && str[i] >= 'M'))
			str[i] = str[i] - 12;
		ft_putchar(str[i]);
		i++;
	}
}
