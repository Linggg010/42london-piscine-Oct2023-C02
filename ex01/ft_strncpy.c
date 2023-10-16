/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:26:59 by yulin             #+#    #+#             */
/*   Updated: 2023/10/10 17:54:33 by yulin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char	*origin = "hello";
	char	copy[] = "123456789";

	printf("origin address is %p\n", origin);
	printf("origin is %s\n", origin);
	printf("copy address is %p\n", copy);
	printf("copy is %s\n", copy);

	strncpy(copy, origin, 2);
        printf("origin address is %p\n", origin);
        printf("origin is %s\n", origin);
        printf("copy address is %p\n", copy);
        printf("copy is %s\n", copy);

	ft_strncpy(copy, origin, 2);
	printf("origin address is %p\n", origin);
	printf("origin is %s\n", origin);
	printf("copy address is %p\n", copy);
	printf("copy is %s", copy);

	return (0);
}
*/
