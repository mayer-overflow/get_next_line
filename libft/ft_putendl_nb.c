/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_nb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 09:02:22 by amayer            #+#    #+#             */
/*   Updated: 2018/11/30 09:02:26 by amayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_nb(int nb)
{
	char c;

	c = '\n';
	ft_putstr(ft_itoa(nb));
	write(1, &c, 1);
}
