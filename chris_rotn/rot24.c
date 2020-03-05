#include "rotn.h"

void	rot24(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'b') || (str[i] >= 'A' && str[i] <= 'B'))
			str[i] = str[i] + 24;
		if ((str[i] <= 'z' && str[i] >= 'c' ) || (str[i] <= 'Z' && str[i] >= 'C'))
			str[i] = str[i] - 2;
		ft_putchar(str[i]);
		i++;
	}
}
