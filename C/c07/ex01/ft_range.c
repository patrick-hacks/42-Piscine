/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfuchs <pfuchs@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:56:10 by pfuchs            #+#    #+#             */
/*   Updated: 2022/02/22 02:11:13 by pfuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*new_array;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	new_array = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (min + i != max)
	{
		new_array[i] = min + i;
		i++;
	}
	return (new_array);
}
