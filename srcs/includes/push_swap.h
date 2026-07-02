/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 14:22:19 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/07/02 12:38:02 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_moves
{
	unsigned int	sa;
	unsigned int	sb;
	unsigned int	ss;
	unsigned int	pa;
	unsigned int	pb;
	unsigned int	ra;
	unsigned int	rb;
	unsigned int	rr;
	unsigned int	rra;
	unsigned int	rrb;
	unsigned int	rrr;
	size_t			sum;
}		t_moves;

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}					t_stack;

typedef struct s_chr
{
	char	c_o;
	char	c_t;
}			t_chr;

double			ft_entropy(t_stack *a);
void			ft_swap(t_stack **lst, char c, t_moves *moves);
void			ft_push(t_stack **to, t_stack **from, char c, t_moves *moves);
void			ft_rotate(t_stack **lst, char c, t_moves *moves);
void			ft_rrotate(t_stack **lst, char c, t_moves *moves);
void			ft_multiple(t_stack **a, t_stack **b, int mov, t_moves *moves);
t_stack			*ft_create_stack(char **argv);
void			ft_algo_fewnums(t_stack **a, t_stack **b);
void			ft_algo_bubble(t_stack **a);
void			ft_algo_select(t_stack **a, t_stack **b);
void			ft_algo_bucket(t_stack **a, t_stack **b);
void			ft_algo_binary(t_stack **a, t_stack **b);
int				ft_lstsize(t_stack *lst);
t_stack			*ft_lstnew(int content);
t_stack			*ft_lstlast(t_stack *lst);
void			ft_lstadd_back(t_stack **lst, t_stack *new);
void			ft_lstadd_front(t_stack **lst, t_stack *new);
unsigned int	*ft_standar(t_stack *stack);
void			ft_bench(t_stack *disorder, t_moves *moves);

#endif
