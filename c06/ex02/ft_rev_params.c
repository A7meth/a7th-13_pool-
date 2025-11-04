#include<unistd.h>

int	main(int ac, char **av)
{
	int	x;
	int	y;

	x = ac - 1;
	while (x > 0)
	{
		y = 0;
		while (av[x][y])
			write(1, &av[x][y++], 1);
		write(1, "\n", 1);
		x--;
	}
	return(0);
}
