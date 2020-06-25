/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayisel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:02:46 by amayisel          #+#    #+#             */
/*   Updated: 2020/06/25 15:23:05 by amayisel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

int	ft_print_program_name(int argc, char **argv)
{
	ft_putchar(*argv[0]);
	return (0);
}

int main(int argc, char **argv) 
{
	printf("%s\n", argv[0]);
	return (0);
}

