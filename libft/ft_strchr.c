/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:08:11 by yislam            #+#    #+#             */
/*   Updated: 2022/07/03 15:55:52 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (!*(s + i))
			return (0);
		i++;
	}
	return ((char *)(s + i));
}

/*
int	main()
{
	char	a[] = "abcxde";
	char	b = 'x';
	
	printf("%s", ft_strchr(a, b));
}
*/