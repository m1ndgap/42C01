/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:04:04 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/06 19:18:02 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tabswap[size];
	int	i;

	printf("%s", "------------\n| Original tab |\n-----------\n");
	printf("%s", " \n");
	printf("%d", tab[0]);
	printf("%s", " \n");
	printf("%d", tab[1]);
	printf("%s", " \n");
	printf("%d", tab[2]);
	printf("%s", " \n");
	printf("%d", tab[3]);
	printf("%s", " \n");
	printf("%d", tab[4]);
	printf("%s", " \n\n\n");
	i = 0;
	while (size > 0)
	{
		printf("%s", "Current values:");
		printf("tabswap %d ", tabswap[i]);
		printf(" \t%d", i);
		printf("%s", "\t | \t");
		printf("tab %d", tab[size - 1]);
		printf(" \t%d", size - 1);
		tabswap[i] = tab[size - 1];
		printf("%s", " \n-----SWAP-----\n");
		printf("%s", "Current values:");
		printf("tabswap %d ", tabswap[i]);
		printf(" \t%d", i);
		printf("%s", "\t | \t");
		printf("tab %d", tab[size - 1]);
		printf(" \t%d", size - 1);
		printf("%s", "\n-----END-----\n\n\n");
		size--;
		i++;
	}
	printf("%s", "--------------\n| Tab inverted |\n-----------\n");
	while (size < i)
	{
		tabswap[size] = tab[size];
		size++;
		printf("[0] - %d\n", tab[0]);
		printf("[1] - %d\n", tab[1]);
		printf("[2] - %d\n", tab[2]);
		printf("[3] - %d\n", tab[3]);
		printf("[4] - %d\n", tab[4]);
		printf("%s", "\n-------------\n\n");
	}
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