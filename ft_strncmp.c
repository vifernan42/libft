/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:38:06 by vifernan          #+#    #+#             */
/*   Updated: 2021/04/10 13:08:33 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1[i] == '\0')
		return (0 - (unsigned char) s2[i]);
	if (s2[i] == '\0')
		return ((unsigned char) s1[i]);
	while (n-- && (s1[i] != '\0' || s1[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	char	*s1 = "";
	char	*s2 = "AAAAAA";
	printf("%d\n", ft_strncmp(s1, s2, 6));
	
	char	*s3 = "";
	char	*s4 = "AAAAAA";
	printf("%d\n", strncmp(s3, s4, 6));
}*/
