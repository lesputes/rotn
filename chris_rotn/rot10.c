#include "rotn.h"

void	rot10(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'p') || (str[i] >= 'A' && str[i] <= 'P'))
			str[i] = str[i] + 10;
		if ((str[i] <= 'z' && str[i] >= 'q' ) || (str[i] <= 'Z' && str[i] >= 'Q'))
			str[i] = str[i] - 16;
		ft_putchar(str[i]);
		i++;
	}
}
