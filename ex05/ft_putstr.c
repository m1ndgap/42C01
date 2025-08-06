/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:41:57 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/06 13:27:33 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/* int	main(void)
{
	char *str;
	str = "I'm a string LOL";
	ft_putstr(str);
} 
	
int	main(void)
{
	char str[16];
	
	str = "I'm a string LOL";
	ft_putstr(str);
} */