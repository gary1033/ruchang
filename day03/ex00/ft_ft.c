/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 15:51:22 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/10 14:07:47 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}


int		main(void)
{
	int *nbr;

	ft_ft(nbr);
	printf("%d", *nbr);
	return (0);
}

