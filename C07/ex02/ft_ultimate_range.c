/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 00:00:10 by lilyass           #+#    #+#             */
/*   Updated: 2025/08/01 00:09:21 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*t;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	t = (int *)malloc((max - min) * sizeof(int));
	if (!t)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	while (min + i < max)
	{
		t[i] = min + i;
		i++;
	}
	*range = t;
	return (max - min);
}
