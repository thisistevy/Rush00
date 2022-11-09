/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:47:31 by fagoncal          #+#    #+#             */
/*   Updated: 2022/09/18 16:31:05 by asadanow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_top(int x)
{
	int	count;

	count = 2;
	if (x == 1)
	{
		ft_putchar('A');
	}
	else
	{
		ft_putchar('A');
		while (count < x)
		{
			ft_putchar('B');
			count++;
		}
		ft_putchar('A');
	}
}

void	ft_print_bot(int x)
{
	int	count;

	count = 2;
	ft_putchar('\n');
	ft_putchar('C');
	while (count < x)
	{
		ft_putchar('B');
		count++;
	}
	if (x > 1)
		ft_putchar('C');
}

void	rush02(int x, int y)
{
	int	count;
	int	count2;

	count = 2;
	count2 = 2;
	if (x >= 1 && y >= 1)
		ft_print_top(x);
	if (y > 1 && x >= 1)
	{
		while (count2 < y)
		{
			ft_putchar('\n');
			ft_putchar('B');
			while (count < x)
			{
				ft_putchar(' ');
				count++;
			}
			if (x > 1)
				ft_putchar('B');
			count2++;
			count = 2;
		}
		ft_print_bot(x);
	}
}
