/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:33:04 by dmoureu-          #+#    #+#             */
/*   Updated: 2015/12/14 17:53:07 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isblank(int c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}