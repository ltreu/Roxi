/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 11:33:51 by ltreu             #+#    #+#             */
/*   Updated: 2018/04/05 13:10:51 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_rot1(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Y')
		{
			ft_putchar(str[i] + 1);
		}
		else if(str[i] >= 'a' && str[i] <= 'z')
		{
			ft_putchar(str[i] + 1);
		}
		else if(str[i] == 'Z' || str[i] == 'z')
		{
			ft_putchar(str[i] - 25);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	ft_putchar('\n');
	return(*str);
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_rot1(argv[1]);
	}
	else
	{
		ft_putchar('\n');
	}
	return(0);
}
