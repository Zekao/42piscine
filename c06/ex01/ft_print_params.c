#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	nbr;
	int	argnbr;
	char	*line;
	int	i;
		
	argnbr = 1;
	nbr = argc-1;
	while (argnbr <= nbr)
	{
		line = argv[argnbr];
		i  = 0;
		while (line[i])
		{
			ft_putchar(line[i]);
			i++;
		}
		ft_putchar('\n');
		argnbr++;
	}

}
