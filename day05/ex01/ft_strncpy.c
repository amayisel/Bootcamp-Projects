/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayisel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 12:39:44 by amayisel          #+#    #+#             */
/*   Updated: 2020/06/24 11:20:09 by amayisel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char *ft_strncpy (char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;

		while (i < n && src [i] != '\0')

		{
			dest [i] = src [i];
			i++;
		}

	while (i < n)

	{
		dest [i] = '\0';
		i++;
	}
	return (dest);
}

int main (void)

{
	char test1 [256] = "abcd";
	printf ("%s\n", ft_strncpy (test1, "note", 5));
   printf ("%s\n", strncpy (test1, "post", 5));
printf ("%s\n", ft_strncpy (test1, "late", 4));
printf ("%s\n", strncpy (test1, "gate", 4));
printf ("%s\n", ft_strncpy (test1, "f", 1));
return (0);
}
