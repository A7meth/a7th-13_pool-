#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	write(1, "zywvutsrqponmlkjihgfedcba", 26);
}

/*
int	main()
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	return(0);
}
*/
