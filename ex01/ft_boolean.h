/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:08:35 by sallow            #+#    #+#             */
/*   Updated: 2020/06/26 09:18:14 by sallow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define LEN 50

int 	*ft_range(int min, int max);

int 	*ft_range(int min, int max);
{
		int *range;
		int index;

		index = 0;
		range = (int*)malloc(sizeof(*range) * (LEN+ 1);
		if (min >= max)
		{
			return (NULL);
		}
		while (min < max)
		{
				return[index] = min;
				index++;
				min++;
		}

}
			
