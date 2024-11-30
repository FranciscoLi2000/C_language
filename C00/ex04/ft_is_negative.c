#include <unistd.h>

void    ft_is_negative(int *n);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void    ft_is_negative(int *n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

int	main(void)
{
    int n[1000];
    write(1, "number is: ",11);
	read(0, &n, 1);
	ft_is_negative(n);
    ft_putchar('\n');
	return (0);
}