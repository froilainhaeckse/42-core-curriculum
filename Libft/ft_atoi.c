/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkupler <tkupler@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:31:28 by tkupler           #+#    #+#             */
/*   Updated: 2024/04/19 18:35:36 by tkupler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t'
		|| c == '\n' || c == '\v'
		|| c == '\f' || c == '\r');
}

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	i = 0;
	result = 0;
	while (ft_isspace(str[i]))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
