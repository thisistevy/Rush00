/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:47:31 by fagoncal          #+#    #+#             */
/*   Updated: 2022/09/18 19:55:26 by asadanow         ###   ########.fr       */
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
		ft_putchar('/');
	}
	else
	{
		ft_putchar('/');
		while (count < x)
		{
			ft_putchar('*');
			count++;
		}
		ft_putchar('\\');
	}
}

void	ft_print_bot(int x)
{
	int	count;

	count = 2;
	ft_putchar('\n');
	ft_putchar('\\');
	while (count < x)
	{
		ft_putchar('*');
		count++;
	}
	if (x > 1)
		ft_putchar('/');
}

void	rush01(int x, int y)
{
	int	count;
	int	count2;

	count = 2;
	count2 = 2;
	if (x >= 1 && y >= 1)
		ft_print_top(x);
	if (x >= 1 && y > 1)
	{
		while (count2 < y)
		{
			ft_putchar('\n');
			ft_putchar('*');
			while (count < x)
			{
				ft_putchar(' ');
				count++;
			}
			if (x > 1)
				ft_putchar('*');
			count2++;
			count = 2;
		}
		ft_print_bot(x);
	}
}
