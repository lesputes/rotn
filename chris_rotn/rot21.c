#include "rotn.h"

void	rot21(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'e') || (str[i] >= 'A' && str[i] <= 'E'))
			str[i] = str[i] + 21;
		if ((str[i] <= 'z' && str[i] >= 'f' ) || (str[i] <= 'Z' && str[i] >= 'F'))
			str[i] = str[i] - 5;
		ft_putchar(str[i]);
		i++;
	}
}
