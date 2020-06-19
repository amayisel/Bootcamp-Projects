#include <stdio.h>
#include <unistd.h>

int ft_putchar (char c)
{
	write (1,&c,1);
	return 0;
}
void ft_print_reverse_alphabet (void)
{
	char letter;
	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar (letter);
		letter --;
	}
}
int main (void)
{
	ft_print_reverse_alphabet ();
	ft_putchar ('\n');
	return 0;
}
