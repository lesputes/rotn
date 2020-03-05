#include "rotn.h"

void	rot17(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'i') || (str[i] >= 'A' && str[i] <= 'I'))
			str[i] = str[i] + 17;
		if ((str[i] <= 'z' && str[i] >= 'j' ) || (str[i] <= 'Z' && str[i] >= 'J'))
			str[i] = str[i] - 9;
		ft_putchar(str[i]);
		i++;
	}
}
