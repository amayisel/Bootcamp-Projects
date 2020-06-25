/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayisel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:51:54 by amayisel          #+#    #+#             */
/*   Updated: 2020/06/25 15:01:59 by amayisel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int a;

	a = 0;
	while (--argc)
	{
		while (argv[argc][a])
			ft_putchar(argv[argc][a++]);
		a = 0;
		ft_putchar('\n');
	}
	return (0);
}
