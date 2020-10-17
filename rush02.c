/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 15:52:11 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/10/17 16:29:30 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_lastline(int sizec)
{
	int c;

	c = 0;
	ft_putchar('C');
	while(c < sizec -2)
	{
		ft_putchar('B');
		c++;
	}
	if(sizec > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void ft_middle(int sizec)
{	
	int c;

	c = 0;
	ft_putchar('B');
	while(c < sizec -2)
	{
		ft_putchar(' ');
		c++;
	}
	if(sizec > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');

}
void ft_firstline(int sizec)
{
	int c;

	c = 0;
	ft_putchar('A');
	while(c < sizec - 2)
	{
		c++;
		ft_putchar('B');
	}
	if (sizec > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}
void ft_rush02(int sizec, int sizel)
{
	int c;
	int l;

	c = 0;
	l = 0;
	if (sizec <= 0 || sizel <= 0)
		return ;
	if (sizec == 1 && sizel == 1)
	{
		ft_putchar('A');
		return ;
	}

	ft_firstline(sizec);

	while(l < sizel -2)
	{
		ft_middle(sizec);
		l++;
	}
	if (sizel > 1)
		ft_lastline(sizec);

	return ;
}
