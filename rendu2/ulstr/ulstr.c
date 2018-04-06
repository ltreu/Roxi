/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 19:26:42 by ltreu             #+#    #+#             */
/*   Updated: 2018/04/02 21:22:52 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_ulstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			ft_putchar(str[i] + 32);
		}
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			ft_putchar(str[i] - 32);
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
		ft_ulstr(argv[1]);
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
