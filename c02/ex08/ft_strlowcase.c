/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pilee <pilee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:04:39 by pilee             #+#    #+#             */
/*   Updated: 2022/09/04 14:06:43 by pilee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
int main()
{
    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%s", ft_strlowcase(str));
}
*/
