/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozouine <ozouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:13:18 by ozouine           #+#    #+#             */
/*   Updated: 2023/11/10 16:39:18 by ozouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	*dst;
	unsigned char	*srce;

	i = 0;
	tmp = malloc(n);
	dst = (unsigned char *)dest;
	srce = (unsigned char *)src;
	while (i < n)
	{
		tmp[i] = srce[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dst[i] = tmp[i];
		i++;
	}
	return (dest);
}
