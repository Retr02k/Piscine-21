/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retr0 <retr0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 23:49:37 by retr0             #+#    #+#             */
/*   Updated: 2025/07/30 00:25:36 by retr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_combo(int *combo, int n, int is_last)
{
	int	a;
	int	b;

	a = 0;
	while (a < n)
	{
		b = combo[a] + '0';
		write(1,  &b, 1);
		a++;
	}
	if (!is_last)
		write(1, ", ", 2);
}

void	ft_print_combn(int	n)
{
	int	combo[10];
	int	i;
	int	j;
	int	is_last;

	i = 0;
	while (i < n)
	{
		combo[i] = i;
		i++;
	}

	while (1)
	{
		is_last = 1;
		if (combo[0] != 10 - n)
			is_last = 0;

		ft_combo(combo, n, is_last);
		if (is_last)
			break;		
		

		i = n - 1;
		while (i >= 0)
		{
			if (combo[i] < 10 - n + i)
			{
				combo[i]++;
				j = i + 1;
				while (j < n)
				{
					combo[j] = combo[j - 1] + 1;
					j++;
				}
				break;
			}
			i--;
		}
	}
}

int main ()
{
	ft_print_combn(2);
	write(1, "\n", 1);
}