/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:55:43 by yulin             #+#    #+#             */
/*   Updated: 2023/10/12 12:21:54 by yulin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/*
int	main()
{
	char	*origin = "hello";
	char	copy[] = "123456789";	//spaces should larger than origin

	printf("origin address is %p\n", origin);
	printf("origin is %s\n", origin);
	printf("copy address is %p\n", copy);
	printf("copy is %s\n", copy);
	printf("\n");

	ft_strcpy(copy, origin);
	printf("origin address is %p\n", origin);
	printf("origin is %s\n", origin);
	printf("copy address is %p\n", copy);
	printf("copy is %s", copy);
	return (0);
}
*/
