/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bench.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 10:41:02 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/07/02 12:27:39 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include "includes/ft_printf.h"
#include <stdio.h>

void	ft_bench(t_stack *disorder, t_moves *moves)
{
	fprintf(stderr, "[bench] disorder:  %f\n", ft_entropy(disorder));
	fprintf(stderr, "[bench] strategy:  \n");
	fprintf(stderr, "[bench] total_ops:  %zu\n", moves->sum);
	fprintf(stderr, "[bench] sa:  %u	 ", moves->sa);
	fprintf(stderr, "sb:  %u  ", moves->sb);
	fprintf(stderr, "ss:  %u  ", moves->ss);
	fprintf(stderr, "pa:  %u  ", moves->pa);
	fprintf(stderr, "pb:  %u", moves->pb);
	fprintf(stderr, "\n");
	fprintf(stderr, "[bench] ra:  %u	 ", moves->ra);
	fprintf(stderr, "rb:  %u  ", moves->rb);
	fprintf(stderr, "rr:  %u  ", moves->rr);
	fprintf(stderr, "rra:  %u  ", moves->rra);
	fprintf(stderr, "rrb:  %u  ", moves->rrb);
	fprintf(stderr, "rrr:  %u", moves->rrr);
	fprintf(stderr, "\n");
}
