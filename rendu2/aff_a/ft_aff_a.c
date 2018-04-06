/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 15:45:06 by ltreu             #+#    #+#             */
/*   Updated: 2018/04/02 15:54:08 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_aff_a(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == 'a')
		{
			ft_putchar('a');
		}
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_aff_a(argc[argv - 1]);
	}
	else
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	return (0);
}
