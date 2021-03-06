/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:00:48 by aliandie          #+#    #+#             */
/*   Updated: 2015/01/30 15:41:51 by aliandie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*strd;
	char	*strc;

	if (!src || !dst)
		return (NULL);
	if (dst <= src)
		return (ft_memcpy(dst, src, n));
	strd = (char*)dst;
	strc = (char*)src;
	while (n)
	{
		n--;
		strd[n] = strc[n];
	}
	return (dst);
}
