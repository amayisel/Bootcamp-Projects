/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayisel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:00:35 by amayisel          #+#    #+#             */
/*   Updated: 2020/06/25 15:34:54 by amayisel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

void ft_putstr (char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar (str[i++]);
	}
}

