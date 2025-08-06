/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:04:04 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/06 18:08:07 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tabswap[size];
	int i;

	printf("%s", "Original tab");
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
	printf("%s", " \n");
	i = 0;
	while (size > 0)
	{
		tabswap[i] = tab[size - 1];
		printf("%s", "Current values:");
		printf("tabswap %d ", tabswap[i]);
		printf(" \t%d", i);
		printf("%s", "\t | \t");
		printf("tab %d", tab[size - 1]);
		printf(" \t%d", size - 1);
		printf("%s", " \n");
		size--;
		i++;
	}
	while (size < i)
	{
		tabswap[i] = tab[i];
		i--;
	}
	printf("%s", "Tab inverted");
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
}

int main(void)
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