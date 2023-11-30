/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozouine <ozouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:34:17 by ozouine           #+#    #+#             */
/*   Updated: 2023/11/27 20:13:01 by ozouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	if (!s)
		return (0);
	i = ft_strlen(s);
	j = 0;
	if (start >= i)
		return (ft_strdup(""));
	else if (i < start + len)
		len = i - start;
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (!sub)
		return (0);
	while (s[start] && j < len)
		sub[j++] = s[start++];
	sub[j] = '\0';
	return (sub);
}
// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	size_t	s_len;
// 	char	*substr;

// 	i = 0;
// 	if (!s)
// 		return (0);
// 	s_len = ft_strlen(s);
// 	if (s_len <= start)
// 		len = 0;
// 	else if (len > s_len - start)
// 		len = s_len - start;
// 	substr = malloc((len + 1) * sizeof(char));
// 	if (!substr)
// 		return (0);
// 	while (i < len && *(s + i + start))
// 	{
// 		*(substr + i) = *(s + i + start);
// 		i++;
// 	}
// 	*(substr + i) = 0;
// 	return (substr);
// }