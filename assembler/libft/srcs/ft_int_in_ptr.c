/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_in_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <erli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 16:50:37 by erli              #+#    #+#             */
/*   Updated: 2019/01/09 16:51:45 by erli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_int_in_ptr(int a, int *tab, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		if (a == tab[i])
			return (1);
		i++;
	}
	return (0);
}