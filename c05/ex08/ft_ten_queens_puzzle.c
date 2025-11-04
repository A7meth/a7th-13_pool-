#include <unistd.h>

int	is_safe(int *p, int c, int r)
{
	int	i;
	int	diff_r;
	int	diff_c;

	i = 0;
	while (i < c)
	{
		diff_r = p[i] - r;
		if (diff_r < 0)
			diff_r = -diff_r;
		diff_c = i - c;
		if (diff_c < 0)
			diff_c = -diff_c;
		if (p[i] == r || diff_r == diff_c)
			return (0);
		i++;
	}
	return (1);
}

void	print_sol(int *p)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		write(1, &(char){p[i] + '0'}, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	solve(int c, int *p)
{
	int	r;
	int	cnt;

	cnt = 0;
	if (c == 10)
	{
		print_sol(p);
		return (1);
	}
	r = 0;
	while (r < 10)
	{
		if (is_safe(p, c, r))
		{
			p[c] = r;
			cnt += solve(c + 1, p);
		}
		r++;
	}
	return (cnt);
}

int	ft_ten_queens_puzzle(void)
{
	int	p[10];

	return (solve(0, p));
}

/*
int	main(void)
{
	ft_ten_queens_puzzle();
}
*/
