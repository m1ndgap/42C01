/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:29:37 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/06 13:34:42 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <unistd.h> */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int	main(void)
{
	int x;
	int y;
	int d;
	int m;
	int *div;
	int *mod;
	// I cant declare pointers that are already pointing to something,
	// first I need to create a variable(int var),
	// then create a pointer(int *ptr) and
	// then point(reference) pointer to variable location.

	x = 19;
	y = 5;
	d = 0;
	m = 0;
	div = &d; // referencing variable with a pointer
	mod = &m;
	ft_div_mod(x, y, div, mod); 
	// we pass pointers as regular variables, no need for extra stuff here
	write(1, &div, 2);
	write(1, &mod, 2); 
	//we are showing gibberish because we cant show 
	//ints so it shows ascii meaning of that int 
	//using a forbidden printf to see what is the edn result
	write(1, "\n", 2);
	printf("%d", *div);
	printf("%d", *mod);
} */