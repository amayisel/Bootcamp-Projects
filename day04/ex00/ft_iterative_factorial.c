#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial (int nb);

{
	write (1,&nb,1);
	return 0;
}
{
	int result;
    int i;
	
	i = 1;
	result = 1;
	if ((nb <= 0) || (nb > 12))
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}
int main (void)
{
	ft_iterative_factorial ();
	return (result);
}
