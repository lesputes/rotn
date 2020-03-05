#include "rotn.h"

void	rot18(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'h') || (str[i] >= 'A' && str[i] <= 'H'))
			str[i] = str[i] + 18;
		if ((str[i] <= 'z' && str[i] >= 'i' ) || (str[i] <= 'Z' && str[i] >= 'I'))
			str[i] = str[i] - 8;
		ft_putchar(str[i]);
		i++;
	}
}
