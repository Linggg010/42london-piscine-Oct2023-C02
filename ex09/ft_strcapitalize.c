/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:46:45 by yulin             #+#    #+#             */
/*   Updated: 2023/10/13 11:19:14 by yulin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_char_is_alpha(char c)
{
	if (c < 65 || (c > 90 && c < 97) || c > 122)
		return (0);
	return (1);
}

int	ft_char_is_numeric(char c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	state;

	i = 0;
	state = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && state)
		{
			str[i] -= 32;
			state = 0;
		}
		else if (!ft_char_is_alpha(str[i]) && !ft_char_is_numeric(str[i]))
			state = 1;
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			state = 0;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	test[] = "salUt, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	ft_strcapitalize(test);
	printf("%s\n", test);
	return (0);
}
*/
