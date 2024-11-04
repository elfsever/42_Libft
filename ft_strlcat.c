/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esever <esever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:45:21 by esever            #+#    #+#             */
/*   Updated: 2024/10/31 13:59:17 by esever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (n <= dstlen)
		return (srclen + n);
	i = 0;
	while (src[i] != '\0' && dstlen + i < n - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst [dstlen + i] = '\0';
	return (srclen + dstlen);
}
