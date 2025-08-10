/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:04:04 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/10 11:51:30 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tabswap[size];
	int	i;

	printf("------------\n| Original tab |\n-----------\n\n[0] %d\n[1] %d\n[2] %d\n[3] %d\n[4] %d\n\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	i = 0;
	while (size > 0)
	{
		printf("Initial values:\ttabswap\t %d \t%d| \ttab %d\t%d\n", tabswap[i],
			i, tab[size - 1], size - 1);
		tabswap[i] = tab[size - 1];
		printf("Swapped values:\ttabswap\t %d \t%d| \ttab %d\t%d\n\n",
			tabswap[i], i, tab[size - 1], size - 1);
		size--;
		i++;
	}
	printf("------------\n| Original tab + Populated swap |\n-----------\n\n[0] %d | %d\n[1] %d | %d\n[2] %d | %d\n[3] %d | %d\n[4] %d | %d\n\n",
		tab[0], tabswap[0], tab[1], tabswap[1], tab[2], tabswap[2], tab[3],
		tabswap[3], tab[4], tabswap[4]);
	while (size < i)
	{
		tab[size] = tabswap[size];
		printf("%d %d\n", size, i);
		write(1, &size, 1);
		write(1, &i, 1);
		size++;
	}
	printf("------------\n| Swapped tab |\n-----------\n\n[0] %d\n[1] %d\n[2] %d\n[3] %d\n[4] %d\n\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	while (size < i)
		;
}

int	main(void)
{
	int size;
	size = 5;

	int tab[size];
	int *x;

	tab[0] = 5;
	tab[1] = 11;
	tab[2] = 33;
	tab[3] = 22;
	tab[4] = 77;

	x = tab;

	ft_rev_int_tab(x, size);
}