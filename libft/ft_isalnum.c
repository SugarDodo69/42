/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboselli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:44:04 by vboselli          #+#    #+#             */
/*   Updated: 2024/11/18 11:47:59 by vboselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalphaint(int in)
{
	return ((in >= 'a' && in <= 'z') || (in >= 'A' && in <= 'Z'));
}

int	ft_isdigitint(int in)
{
	return (in >= '0' && in <= '9');
}

int	ft_isalnum(int in)
{
	return (ft_isalphaint(in) || ft_isdigitint(in));
}
