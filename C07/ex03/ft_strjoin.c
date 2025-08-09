/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 00:16:28 by lilyass           #+#    #+#             */
/*   Updated: 2025/08/01 22:54:50 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_cont(int size, char **strs, char *sep)
{
	int	i;
	int	cont;

	cont = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		cont += ft_strlen(strs[i]);
		i++;
	}
	if (cont <= 0)
		return (0);
	return (cont + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*tab;

	tab = (char *)malloc(ft_cont(size, strs, sep) * sizeof(char));
	if (size == 0)
		return (tab);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = -1;
		while (strs[i][++j])
			tab[k++] = strs[i][j];
		j = -1;
		while (sep[++j] && i < size - 1)
			tab[k++] = sep[j];
		i++;
	}
	tab[k] = '\0';
	return (tab);
}
