/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pilee <pilee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:32:51 by pilee             #+#    #+#             */
/*   Updated: 2022/09/06 15:49:46 by pilee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}
/*
int main()
{
	int nb;
	int power;
	nb = 5;
	power = 4;

printf("%d", ft_recursive_power(nb, power));
}*/
