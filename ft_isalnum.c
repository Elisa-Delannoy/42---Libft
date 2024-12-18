/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:34:12 by edelanno          #+#    #+#             */
/*   Updated: 2024/11/04 15:34:25 by edelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

// int	ft_isalnum(int c)
// {
// 	return ((c >= 65 && c <= 90) 
		// || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
// }
// int	main()
// {
// 	printf("%d\n", ft_isalnum(98));
// 	printf("%d\n", ft_isalnum(47));
// }