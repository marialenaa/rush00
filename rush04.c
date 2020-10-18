/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallizz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 11:08:17 by mgallizz          #+#    #+#             */
/*   Updated: 2020/10/18 11:22:29 by mgallizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_firstline(int sizecol)
{
	int	col;

	col = 0;
	ft_putchar('A');
	while (col < sizecol - 2)
	{
		ft_putchar('B');
		col++;
	}
	if (sizecol > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	ft_lastline(int sizecol)
{
	int	col;

	col = 0;
	ft_putchar('C');
	while (col < sizecol - 2)
	{
		ft_putchar('B');
		col++;
	}
	if (sizecol > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	ft_middle(int sizecol)
{
	int	col;

	col = 0;
	ft_putchar('B');
	while (col < sizecol - 2)
	{
		ft_putchar(' ');
		col++;
	}
	if (sizecol > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	rush(int sizecol, int sizeline)
{
	int	col;
	int	line;

	col = 0;
	line = 0;
	if (sizecol <= 0 || sizeline <= 0)
		return ;
	if (sizecol == 1 && sizeline == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
		return ;
	}
	ft_firstline(sizecol);
	while (line < sizeline - 2)
	{
		ft_middle(sizecol);
		line++;
	}
	if (sizeline > 1)
		ft_lastline(sizecol);
	return ;
}
