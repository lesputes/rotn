#include "rotn.h"

void	rot12(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'n') || (str[i] >= 'A' && str[i] <= 'N'))
			str[i] = str[i] + 12;
		if ((str[i] <= 'z' && str[i] >= 'o' ) || (str[i] <= 'Z' && str[i] >= 'O'))
			str[i] = str[i] - 14;
		ft_putchar(str[i]);
		i++;
	}
}
