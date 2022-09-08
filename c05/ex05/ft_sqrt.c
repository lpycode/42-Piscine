/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pilee <pilee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:47:36 by pilee             #+#    #+#             */
/*   Updated: 2022/09/07 12:19:52 by pilee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	while (n * n <= nb && nb > 0)
	{
		if (n * n == nb)
			return (n);
		else if (n >= 46341)
			return (0);
		n++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_sqrt(9));
}
*/
