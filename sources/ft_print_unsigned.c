/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:45:17 by rarahhal          #+#    #+#             */
/*   Updated: 2021/12/04 15:48:55 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_len_nb(unsigned int nb)
{
	unsigned int	len;

	len = 0;
	while (nb)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_writee(char *str, unsigned int nb, unsigned int len)
{
	if (nb == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nb)
	{
		str[len] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}

char	*ft_utoa(unsigned int nb)
{
	unsigned int	len;
	char			*str;

	len = ft_len_nb(nb);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	return (ft_writee(str, nb, len));
}

int	ft_print_unsigned(unsigned int nb)
{
	int		lenght_prints;
	char	*num;

	num = ft_utoa(nb);
	lenght_prints = ft_print_str(num);
	free(num);
	return (lenght_prints);
}
