/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:08:40 by yulin             #+#    #+#             */
/*   Updated: 2023/10/14 17:32:36 by yulin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
/*
int	main(void)
{
	char	des[] = "123456";
	char	src[] = "ABCDE";
	unsigned int	size = 4;
	unsigned int	i;

	i = ft_strlcpy(des, src, size);
	printf("i: %d, des: %s, src: %s\n", i, des, src);
	return (0);
}
*/
