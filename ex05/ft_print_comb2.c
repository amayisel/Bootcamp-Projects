#include <stdio.h>
#include <unistd.h>

int ft_putchar (char c)
{
	write (1,&c,1);
	return 0;
}
void display (int nb)
{
	int first;
	int second;
	if (nb > 9)
	{
		first = nb/10;
		second = nb%10;
		ft_putchar (first + 48);
		ft_putchar (second + 48);
	}

void ft_print_comb2 (void)

{
	{
	int i;
	int o;
	i = 0;
	while (i <= 99)
	{
		o = i +1;
		while (o <= 99)
		{
			ft_putchar (i);
			ft_putchar (' ');
			ft_putchar (o);
			if (i < 98 || o < 99)
			{
				ft_putchar (',');
				ft_putchar (' ');
			}
			++o;
		}
		++i;
	}
	}
}

