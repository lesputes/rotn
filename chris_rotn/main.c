#include "rotn.h"

void	ft_putstr(char *str);

void	ft_putchar(char c);

int main(int argc, char **argv)
{
	int i;

	i = 2;
	if (argc == 1)
		ft_putstr("error: Please instert rotn and phrase\n");
	if (argc == 2)
		ft_putstr("error: Please insert phrase\n");
	if (argc >= 3)
	{
		while(argv[i] <= argc - 1)
		{
			if(argv[i] == argc - 1)
			{
				rotn(argv[1], argv[i]);
				ft_putchar('\n');
				return (0);
			}
			rotn(argv[1], argv[i]);
			ft_putchar(' ');
			i++;
		}
	}
	return(0);
}
