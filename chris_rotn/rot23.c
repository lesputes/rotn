#include "rotn.h"

void	rot23(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'c') || (str[i] >= 'A' && str[i] <= 'C'))
			str[i] = str[i] + 23;
		if ((str[i] <= 'z' && str[i] >= 'd' ) || (str[i] <= 'Z' && str[i] >= 'D'))
			str[i] = str[i] - 3;
		ft_putchar(str[i]);
		i++;
	}
}
