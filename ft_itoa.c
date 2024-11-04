/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esever <esever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:55:43 by esever            #+#    #+#             */
/*   Updated: 2024/11/02 16:57:05 by esever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_size(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str_num;
	size_t		number_len;
	long int	num;

	num = n;
	number_len = number_size(n);
	if (n < 0)
	{
		num *= -1;
		number_len++;
	}
	str_num = (char *)malloc(sizeof(char) * (number_len + 1));
	if (!str_num)
		return (NULL);
	*(str_num + number_len) = 0;
	while (number_len--)
	{
		*(str_num + number_len) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str_num + 0) = '-';
	return (str_num);
}
