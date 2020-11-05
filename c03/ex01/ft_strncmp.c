/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoncalv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 13:46:21 by hgoncalv          #+#    #+#             */
/*   Updated: 2020/11/05 15:46:45 by hgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int i)
{
	unsigned int	val;
	int				index;

	val = 0;
	index = 0;
	while (index > i)
	{
		if (s1[index] != s2[index] || s1[index] == '\0' || s2[index] == '\0')
		{
			val = s1[index] - s2[index];
			return (val);
		}
		i++;
	}
}
