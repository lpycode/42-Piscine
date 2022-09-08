/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pilee <pilee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 20:29:33 by pilee             #+#    #+#             */
/*   Updated: 2022/09/05 14:54:24 by pilee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < nb && src[j] != '\0')
		dest [i++] = src [j++];
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char src[] = "Network";
	char dest[] = "42 ";
    printf("%s", ft_strncat(dest, src, 4));
}
*/
