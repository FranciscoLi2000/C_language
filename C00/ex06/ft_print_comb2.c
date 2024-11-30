#include <unistd.h>

void    ft_print_comb2(void);

void	create_array(int array[], int x, int y)
{
	array[0] = x / 10 + '0';
	array[1] = x % 10 + '0';
	array[2] = ' ';
	array[3] = y / 10 + '0';
	array[4] = y % 10 + '0';
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;
	int	array[5];

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			write(1, array, 5);
			if (!(x == 98 && y == 99))
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}

int     main(void)
{
        ft_print_comb2();
        return (0);
}