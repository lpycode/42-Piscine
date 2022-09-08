/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pilee <pilee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:59:12 by pilee             #+#    #+#             */
/*   Updated: 2022/09/04 14:03:56 by pilee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int main()
{
    char str[] = "leepinyang";
    printf("%s", ft_strupcase(str));
}
*/
