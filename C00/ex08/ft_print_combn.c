#include <unistd.h>

void	ft_print_combn(int n);

void	ft_print_combn(int n)
{
	int	num[10];
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (i < n)
		num[i++] = x++ + '0';
	while (num[0] <= '9' - n + 1)
	{
		write(1, num, n);
		if (num[0] != '9' - n + 1)
			write(1, ", ", 1);
		i = n - 1;
		while (i > 0 && num[i] >= '9' - (n - 1 - i))
			i--;
		if (i >= 0)
		{
			num [i]++;
			while (++i < n)
				num[i] = num[n - 1] + 1;
		}
	}
}

int     main(void)
{
        int n = 2;
        ft_print_combn(n);
        return (0);
}