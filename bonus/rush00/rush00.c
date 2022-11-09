/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:47:31 by fagoncal          #+#    #+#             */
/*   Updated: 2022/09/18 16:27:57 by asadanow         ###   ########.fr       */
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
		ft_putchar('o');
	}
	else
	{
		ft_putchar('o');
		while (count < x)
		{
			ft_putchar('-');
			count++;
		}
		ft_putchar('o');
	}
}

void	ft_print_bot(int x)
{
	int	count;

	count = 2;
	ft_putchar('\n');
	ft_putchar('o');
	while (count < x)
	{
		ft_putchar('-');
		count++;
	}
	if (x > 1)
		ft_putchar('o');
}

void	rush00(int x, int y)
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
			ft_putchar('|');
			while (count < x)
			{
				ft_putchar(' ');
				count++;
			}
			if (x > 1)
				ft_putchar('|');
			count2++;
			count = 2;
		}
		ft_print_bot(x);
	}
}
