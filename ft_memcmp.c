/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozouine <ozouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:11:50 by ozouine           #+#    #+#             */
/*   Updated: 2023/11/12 18:55:29 by ozouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char *p1;
	unsigned char *p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (n < 1)
		return (0);
	while (/*p1[i] && p2[i] && */i < n)
	{
		if (p1[i] != p2[i])	
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
