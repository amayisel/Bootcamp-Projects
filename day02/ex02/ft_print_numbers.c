#include <stdio.h>
#include <unistd.h>

void ft_putchar (char c)
{
	write (1,&c,1);
}
void ft_print_numbers (void)
{
	char number;
	number = '0';
	while (number <= '9')
	{
		ft_putchar (number);
		number ++;
	}
}
<<<<<<< HEAD:day02/ex02/ft_print_numbers.c
int main (void)
{
	ft_print_numbers ();
	ft_putchar ('\n');
	return 0:;
}
=======

>>>>>>> 856a70eda79d843e6ad32e2365d9fafb2deb52bf:ex02/ft_print_numbers.c
