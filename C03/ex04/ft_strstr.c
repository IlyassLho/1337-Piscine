/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:55:31 by lilyass           #+#    #+#             */
/*   Updated: 2025/07/23 16:16:08 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "unistd.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!str || !to_find)
		return (NULL);
	if (!to_find[0])
		return (str);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (to_find[j] && str[i + j] && str[i + j] == to_find[j])
				j++;
			if (!to_find[j])
				return (&str[i]);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
