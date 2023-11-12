/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozouine <ozouine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 22:14:53 by ozouine           #+#    #+#             */
/*   Updated: 2023/11/10 17:10:09 by ozouine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char		dest[4] ;
	const char	src[] = "zouine";
	// char		dest2[] = "";
	// const char	src2[] = "zouine";

	memmove(dest, src, 4);
	for (int i = 0; i < 4; i++)
		printf("%c, \n", dest[i]);
	printf("************\n");
	ft_memmove(dest, src, 4);

	for (int b = 0; b < 4; b++)
		printf("%c, \n", dest[b]);
}
