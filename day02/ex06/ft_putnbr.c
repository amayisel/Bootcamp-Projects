#include <stdio.h>
#include <unistd.h>

int ft_putchar (char c)
{
	write (1,&c,1);
	return 0;
}
void ft_putnbr (int ac)
{
	unsigned int nbr;
	if (ac < 0)
	{
		ft_putchar ('-');
		nbr = ac * -1;
	}
	else
		nbr = ac;
	if (nbr >= 9)
		ft_putchar (nbr / 10);
	ft_putchar (nbr 9+58);
}



