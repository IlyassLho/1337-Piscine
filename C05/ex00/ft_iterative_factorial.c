/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:32:56 by lilyass           #+#    #+#             */
/*   Updated: 2025/07/29 16:52:33 by lilyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i < n)
	{
		nb *= (n - i);
		i++;
	}
	return (nb);
}
