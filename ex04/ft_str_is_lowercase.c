/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:34:04 by yulin             #+#    #+#             */
/*   Updated: 2023/10/11 11:54:05 by yulin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*test1 = "12345";
	char	*test2 = "abcde";
	char	*test3 = "gw22ww";
	char	*test4 = "";
	char	*test5 = "SHRa12";

	int	a = ft_str_is_lowercase(test1);
	int	b = ft_str_is_lowercase(test2);
	int	c = ft_str_is_lowercase(test3);
	int	d = ft_str_is_lowercase(test4);
	int     e = ft_str_is_lowercase(test5);

	printf("12345: %d\n", a); //should be 0
	printf("abcde: %d\n", b); //should be 1
	printf("gw22ww: %d\n", c); //should be 0
	printf(""": %d\n", d); //should be 1
	printf("SHRa12: %d\n", e); //should be 0
	return (0);
}
*/
