/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarahhal <rarahhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:44:57 by rarahhal          #+#    #+#             */
/*   Updated: 2021/12/16 13:10:05 by rarahhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long	ft_nb_len(long nb)
{
	long	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_write(char *str, long nb, long len)
{
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
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

char	*ft_itoa(int n)
{
	long	nb;
	long	len;
	char	*str;

	nb = n;
	len = ft_nb_len(nb);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	return (ft_write(str, nb, len));
}

int	ft_print_nbr(int nb)
{
	int		lenght_prints;
	char	*num;

	num = ft_itoa(nb);
	lenght_prints = ft_print_str(num);
	free(num);
	return (lenght_prints);
}
