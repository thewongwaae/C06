/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:09:50 by hwong             #+#    #+#             */
/*   Updated: 2022/08/31 10:07:55 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (((str1[i] != '\0') || (str2[i] != '\0')) && (str1[i] == str2[i]))
		i++;
	return (str1[i] - str2[i]);
}

void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = 1;
	while (a < argc)
	{
		b = a + 1;
		while (b < argc)
		{
			if (ft_strcmp(argv[a], argv[b]) > 0)
				ft_swap(argv[a], argv[b]);
			b++;
		}
		a++;
	}
	a = 1;
	while (a < argc)
	{
		ft_putstr(argv[a]);
		ft_putchar(' ');
		a++;
	}
}
