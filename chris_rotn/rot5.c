#include "rotn.h"

void	rot5(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'u') || (str[i] >= 'A' && str[i] <= 'U'))
			str[i] = str[i] + 5;
		if ((str[i] <= 'z' && str[i] >= 'v' ) || (str[i] <= 'Z' && str[i] >= 'V'))
			str[i] = str[i] - 21;
		ft_putchar(str[i]);
		i++;
	}
}
