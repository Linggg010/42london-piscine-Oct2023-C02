/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:40:41 by yulin             #+#    #+#             */
/*   Updated: 2023/10/11 10:48:51 by yulin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*test1 = "12345";
	char	*test2 = "klrjhlwifj";
	char	*test3 = "gw22ww";
	char	*test4 = "";

	int	a = ft_str_is_numeric(test1);
	int	b = ft_str_is_numeric(test2);
	int	c = ft_str_is_numeric(test3);
	int	d = ft_str_is_numeric(test4);

	printf("%d\n", a); //should be 1
	printf("%d\n", b); //should be 0
	printf("%d\n", c); //should be 0
	printf("%d\n", d); //should be 1
	return (0);
}
*/
