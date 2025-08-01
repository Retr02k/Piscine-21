/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:03:13 by retr0             #+#    #+#             */
/*   Updated: 2025/07/31 23:56:59 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int	a, int	b, int	*div, int	*mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main (void)
{
	int	i = 1000;
	int	j = 2;
	int div;
	int mod;

	ft_div_mod(i, j, &div, &mod);
	printf("1st value = %i\n2nd value = %i\ndiv output = %i\nmod output = %i\n", i, j, div, mod);
}
*/