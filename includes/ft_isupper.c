/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:55:03 by ksiziva           #+#    #+#             */
/*   Updated: 2018/06/08 10:14:44 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int arg)
{
	if (arg >= 'A' && arg <= 'Z')
		return (1);
	else
		return (0);
}