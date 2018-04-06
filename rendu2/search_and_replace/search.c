/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 09:37:39 by ltreu             #+#    #+#             */
/*   Updated: 2018/04/06 10:04:52 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len] != '\0')
	{
		len++;
	}
	return(len);
}
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_search(char *s1, char *s2, char *s3)
{
	int i;

	i = 0;
	while(s1[i] != '\0')
	{
		if(s1[i] == s2[0])
			s1[i] = s3[0];
		i++;
	}
	return(s1);
}

int main(int argc, char **argv)
{
	char *cup;

	if(argc == 4)
	{
		if(ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		{
			cup = ft_search(argv[1], argv[2], argv[3]);
			ft_putstr(cup);
		}
	}
	ft_putchar('\n');
	return(0);
}


