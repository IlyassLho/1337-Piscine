/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:42:56 by lilyass           #+#    #+#             */
/*   Updated: 2025/07/25 22:43:51 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	while (i >= 1)
	{
		j = 0;
		while (argv[i][j])
			j++;
		write(1, argv[i], j);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
