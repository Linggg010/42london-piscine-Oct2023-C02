/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:04:56 by yulin             #+#    #+#             */
/*   Updated: 2023/10/11 12:11:11 by yulin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*test1 = "12345";
	char	*test2 = "ABC!2";
	char	*test3 = "\t\n";
	char	*test4 = "";

	int	a = ft_str_is_printable(test1);
	int	b = ft_str_is_printable(test2);
	int	c = ft_str_is_printable(test3);
	int	d = ft_str_is_printable(test4);

	printf("12345: %d\n", a); //should be 1
	printf("ABC!2: %d\n", b); //should be 1
	printf("\\t\\n: %d\n", c); //should be 0
	printf(""":%d\n", d); //should be 1
	return (0);
}
*/
