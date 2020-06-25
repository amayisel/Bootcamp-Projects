/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayisel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 12:03:18 by amayisel          #+#    #+#             */
/*   Updated: 2020/06/24 11:17:42 by amayisel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strcpy (char *dest, char *src)

{
	int i;

	i = 0;

	while (src [i] != '\0')

	{
		dest [i] = src [i];
		i++;
	}

	dest [i] = '\0';

	return (dest);
}

int main ()

{
	char str1[20] = "wereherenow";
	char str2[20];
	printf ("%s\n", ft_strcpy (str2, str1));
	printf ("%s\n", str2);
	return (0);
}


