/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayisel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:07:54 by amayisel          #+#    #+#             */
/*   Updated: 2020/06/25 15:05:35 by amayisel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (--argc)
	{
		while (argv[b][a])
			ft_putchar(argv[b][a++]);
		a = 0;
		b += 1;
		ft_putchar('\n');
	}
	return (0);
}	
