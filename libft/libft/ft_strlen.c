/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:22:45 by yislam            #+#    #+#             */
/*   Updated: 2022/06/22 18:21:18 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *src)
{
	size_t	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	return (len);
}
/*
int	main(void)
{
	char yavuz[] = "yavuztalhaislam";

	printf("%lu",ft_strlen(yavuz));
}
*/