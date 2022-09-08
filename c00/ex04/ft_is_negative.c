/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pilee <pilee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:17:26 by pilee             #+#    #+#             */
/*   Updated: 2022/08/24 18:20:16 by pilee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positive;
	char	negative;

positive = 'P';
negative = 'N';
	if (n >= 0)
	{
		write(1, &positive, 1);
	}
	else
	{	
		write(1, &negative, 1);
	}
}
