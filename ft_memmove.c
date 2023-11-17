/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozouine <ozouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:13:18 by ozouine           #+#    #+#             */
/*   Updated: 2023/11/17 11:50:43 by ozouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*srce;
	size_t			i;
	size_t			j;

	if (dest == NULL && src == NULL)
		return (NULL);
	dst = (unsigned char *)dest;
	srce = (unsigned char *)src;
	i = ft_strlen(dst);
	j = ft_strlen(srce);

}
