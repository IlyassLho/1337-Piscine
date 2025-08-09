/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:33:42 by lilyass           #+#    #+#             */
/*   Updated: 2025/07/29 20:09:53 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	n = nb;
	i = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power - 1)
	{
		nb *= n;
		i++;
	}
	return (nb);
}
