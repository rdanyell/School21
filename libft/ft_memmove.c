/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdanyell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:57:24 by rdanyell          #+#    #+#             */
/*   Updated: 2021/10/22 15:19:00 by rdanyell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t n)

{
	if (!(dst || src))
		return (dst);
	if (src < dst)
		while (n--)
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	if (src > dst)
		ft_memcpy(dst, src, n);
	return (dst);
}
