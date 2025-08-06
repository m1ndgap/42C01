/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:29:37 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/06 11:18:38 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/* int	main(void)
{
	int	x;
	int	y;

	x = 42;
	y = 69;
	ft_swap(&x, &y);
	write(1, &x, 1);
	write(1, &y, 1);
} */
