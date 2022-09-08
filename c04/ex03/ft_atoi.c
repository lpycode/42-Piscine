/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pilee <pilee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:56:48 by pilee             #+#    #+#             */
/*   Updated: 2022/09/06 16:51:52 by pilee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	count;
	int	result;

	i = 0;
	count = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if ((str[i]) == 45)
			count *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57 && str[i])
	{	
		result = result * 10 + str[i] - 48;
		i++;
	}
	result *= count;
	return (result);
}

int main()
{
    char *s = "   ---+--+0123456789ab567";
	printf("%d", ft_atoi(s));
}

