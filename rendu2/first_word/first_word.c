/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 10:06:31 by ltreu             #+#    #+#             */
/*   Updated: 2018/04/06 10:41:03 by ltreu            ###   ########.fr       */
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

	if(argc == 2)
	{
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i++;
		}
		while(argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return(0);
}
