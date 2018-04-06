/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 19:16:19 by ltreu             #+#    #+#             */
/*   Updated: 2018/04/02 19:25:54 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			i++;
		}
		while(i >= 0)
		{
			ft_putchar(argv[1][i]);
			i--;
		}
	}
	ft_putchar('\n');
	return (0);
}
