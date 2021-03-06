/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:10:07 by ncella            #+#    #+#             */
/*   Updated: 2017/11/13 18:24:02 by ncella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len_int(int n)
{
	if (n < 0)
		n = -n;
	if (n < 10)
		return (1);
	else
		return (ft_len_int(n / 10) + 1);
}
