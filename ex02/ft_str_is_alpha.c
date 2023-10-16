/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:58:51 by yulin             #+#    #+#             */
/*   Updated: 2023/10/11 10:38:00 by yulin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
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

	int	a = ft_str_is_alpha(test1);
	int	b = ft_str_is_alpha(test2);
	int	c = ft_str_is_alpha(test3);
	int	d = ft_str_is_alpha(test4);

	printf("%d\n", a); //should be 0
	printf("%d\n", b); //should be 1
	printf("%d\n", c); //should be 0
	printf("%d\n", d); //should be 1
	return (0);
}
*/
