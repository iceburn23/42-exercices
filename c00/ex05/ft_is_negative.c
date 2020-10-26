/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 15:25:59 by hgoncalv          #+#    #+#             */
/*   Updated: 2020/10/26 15:30:13 by hgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char sinal;

	if (n >= 0)
	{
		sinal = 'P';
	}
	else
	{
		sinal = 'N';
	}
	write(1, &sinal, 1);
}

int		main(void)
{
	unsigned int n;

	n = -1;
	ft_is_negative(n);
	return (0);
}
