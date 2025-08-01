/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 19:34:30 by retr0             #+#    #+#             */
/*   Updated: 2025/08/01 19:50:50 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strlen(char	*str)
{
	int counter;

	counter = 0;
	while (str[counter])
		counter++;

	return(counter);
}

int	main()
{
	printf("The length of the string is: %i\n", ft_strlen("ola"));
}
