/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 11:11:43 by ltreu             #+#    #+#             */
/*   Updated: 2018/04/05 11:21:42 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_rot13(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'M')
		{
			ft_putchar(str[i] + 13);
		}
		else if(str[i] >= 'N' && str[i] <= 'Z')
		{
			ft_putchar(str[i] - 13);
		}
		else if(str[i] >= 'a' && str[i] <= 'm')
		{
			ft_putchar(str[i] + 13);
		}
		else if(str[i] >= 'n' && str[i] <= 'z')
		{
			ft_putchar(str[i] - 13);
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

int main(int argc, char ** argv)
{
	if(argc == 2)
	{
		ft_rot13(argv[1]);
	}
	else
	{
		ft_putchar('\n');
	}
	return(0);
}
