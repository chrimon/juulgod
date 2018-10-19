/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmondev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 14:11:37 by chmondev          #+#    #+#             */
/*   Updated: 2018/09/25 18:31:12 by chmondev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{	
		dst[i] = src[i];
		i++;
	}	
	dst[i] = '\0';
	return(dst);
}
