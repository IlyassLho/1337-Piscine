/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:07:13 by lilyass           #+#    #+#             */
/*   Updated: 2025/07/31 23:37:09 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*t;

	if (min >= max)
		return (NULL);
	t = (int *)malloc((max - min) * sizeof(int));
	if (!t)
		return (NULL);
	i = 0;
	while (min + i < max)
	{
		t[i] = min + i;
		i++;
	}
	return (t);
}
