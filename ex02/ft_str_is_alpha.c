/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeheeki </var/mail/taeheeki>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:39:59 by taeheeki          #+#    #+#             */
/*   Updated: 2021/03/11 14:48:32 by taeheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (('A' <= str[i] && str[i] <= 'Z')
				|| ('a' <= str[i] && str[i] <= 'z'))
			return (1);
		else
			return (0);
	}
	return (1);
}