/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 08:24:26 by ltreu             #+#    #+#             */
/*   Updated: 2018/04/06 10:44:18 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_alpha_mirror(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			j = 'Z' + ('A' - str[i]);
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = 'z' + ('a' - str[i]);
		}
		write(1, &j, 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		ft_alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return(0);
}

