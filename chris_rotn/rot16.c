#include "rotn.h"

void	rot16(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'j') || (str[i] >= 'A' && str[i] <= 'J'))
			str[i] = str[i] + 16;
		if ((str[i] <= 'z' && str[i] >= 'k' ) || (str[i] <= 'Z' && str[i] >= 'K'))
			str[i] = str[i] - 10;
		ft_putchar(str[i]);
		i++;
	}
}
