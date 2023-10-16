/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:56:35 by yulin             #+#    #+#             */
/*   Updated: 2023/10/11 11:59:56 by yulin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*test1 = "12345";
	char	*test2 = "ABCDE";
	char	*test3 = "A12bc";
	char	*test4 = "";

	int	a = ft_str_is_uppercase(test1);
	int	b = ft_str_is_uppercase(test2);
	int	c = ft_str_is_uppercase(test3);
	int	d = ft_str_is_uppercase(test4);

	printf("12345: %d\n", a); //should be 0
	printf("ABCDE: %d\n", b); //should be 1
	printf("A12bc: %d\n", c); //should be 0
	printf(""": %d\n", d); //should be 1
	return (0);
}
*/
