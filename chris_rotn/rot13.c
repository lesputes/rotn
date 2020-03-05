#include "rotn.h"

void	rot13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			str[i] = str[i] + 13;
		if ((str[i] <= 'z' && str[i] >= 'n' ) || (str[i] <= 'Z' && str[i] >= 'N'))
			str[i] = str[i] - 13;
		ft_putchar(str[i]);
		i++;
	}
}
