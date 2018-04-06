/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 18:36:41 by ltreu             #+#    #+#             */
/*   Updated: 2018/04/02 18:45:33 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(void)
{
	char counter;

	counter = '0';
	while(counter <= '9')
	{
		ft_putchar(counter);
		counter++;
	}
}

int main(void)
{
	ft_print_number();
	return(0);
}
