#include <stdio.h>
#include <unistd.h>

int ft_recursive_factorial (int nb);
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb > 1)
		return (nb *ft_recursive_factorial (nb -1));
	else
		return (1);
}
int main (void)
{
	ft_recursive_factorial ();
	printf ("%d", ft_recursive_factorial (0));
	return 0;
}

