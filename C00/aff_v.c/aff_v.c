#include <unistd.h>

void    aff_v(char *string, char c);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void    aff_v(char *string, char c)
{
	if (*string == 'v')
	{
        ft_putchar('v');
        ft_putchar('\n');
    }
	else if (!(*string == 'v'))
	{
        ft_putchar('v');
        ft_putchar('\n');
    }
    else  if (!(*string == '1'))
    {
        ft_putchar('v');
        ft_putchar('\n');
    }
}

int	main(void)
{
    
	aff_v("dfbfkdfbaf");
	return (0);
}