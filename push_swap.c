/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 15:39:58 by alcristo          #+#    #+#             */
/*   Updated: 2026/06/28 10:41:02 by alcristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

static int	check_error(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][0] != '-')
				return (write(2, "Error\n", 6), EXIT_FAILURE);
			j++;
		}
		j = i;
		while (argv[j])
		{
			if (argv[j] == argv[i] || ft_strchr(argv[i], '.'))
				return (write(2, "Error", 6), EXIT_FAILURE);
			j++;
		}
		if (ft_atoi(argv[i]) > INT_MAX || ft_atoi(argv[i]) < INT_MIN)
			return (write(2, "Error", 6), EXIT_FAILURE);
		i++;
	}
	return (0);
}

/*static int	select_algo(t_list *a, double entr)
{
	t_list	*a;

	if (strat == 0)
	{
		if (entr < 0.2)
			ft_algo_select(a);
		else if (entr < 0.5)
			ft_algo_bucket(a);
		else
			ft_algo_binary(a);
	}
	else if (strat == 1)
		ft_algo_select(a);
	else if (strat == 2)
		ft_algo_bucket(a);
	else if (strat == 3)
		ft_algo_binary(a);
	else
		return (write(2, "Error\n", 6), EXIT_FAILURE);
	return (0);
}*/

/*int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
//	int		strat;
	double	entropy;

	if (argc == 1 || argc == 2)
		return (EXIT_SUCCESS);
	if (check_error(argv) != 0)
		exit(EXIT_FAILURE);
	a = ft_create_stack(argv);
	if (!a)
		return (write(2, "Error\n", 6), EXIT_FAILURE);
	b = NULL;
	entropy = ft_entropy(a);
	if (entropy == 1)
		return (EXIT_SUCCESS);
	if (argc - 1 < 6)
		return (ft_algo_fewnums(a, b), EXIT_SUCCESS);
//	strat = select_strat(argv);
//	select_algo(a, entropy);
	if (b != NULL)
		return (free(b), free(a), write(2, "Error\n", 6), EXIT_FAILURE);
	free(a);
	return (EXIT_SUCCESS);
}*/
