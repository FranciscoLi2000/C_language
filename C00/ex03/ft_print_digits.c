#include <unistd.h>

void	ft_print_digits(void);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_digits(void)
{
    int    n;
	n = 0;
	while (n < 10)
	{
		ft_putchar(n + '0');
		n++;
	}
}

int	main(void)
{
	ft_print_digits();
    ft_putchar('\n');
	return (0);
}