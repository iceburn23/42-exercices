/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 10:26:50 by ecaceres          #+#    #+#             */
/*   Updated: 2020/11/03 17:25:06 by hgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_transform_char(char *c, bool to_upper)
{
	if (!to_upper)
	{
		if (*c >= 'A' && *c <= 'Z')
		{
			*c = *c + 32;
		}
	}
	else
	{
		if (*c >= 'a' && *c <= 'z')
		{
			*c = *c - 32;
		}
	}
}

bool	is_char_alpha(char c)
{
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

bool	is_char_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	int i;
	bool in_word;

	i=0;

	while (str[i] != '\0')
	{
		if(is_char_alpha(str[i]) || is_char_numeric(str[i]))
		{
			if(is_char_numeric(str[i]))
			{
				in_word = true;
				i++;
				continue;
			}
			if(!in_word)
			{
				ft_transform_char(&str[i],true);
				in_word = true;

			}
			else
			{
				ft_transform_char(&str[i],false);
			}
		}
		else{
			in_word = false;
		}
		i++;
	}
	return (str);
}
