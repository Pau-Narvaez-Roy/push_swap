/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 14:22:19 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/07/02 08:18:59 by pnarvaez         ###   ########.fr       */
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
	int	sa;
	int	sb;
	int	ss;
	int	pa;
	int	pb;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
	int	sum;
}		t_moves;

typedef struct s_list
{
	int				num;
	struct s_list	*next;
}					t_list;

typedef struct s_chr
{
	char	c_o;
	char	c_t;
}			t_chr;

double			ft_entropy(t_list *a);
void			ft_swap(t_list **lst, char c);
void			ft_push(t_list **to, t_list **from, char c);
void			ft_rotate(t_list **lst, char c);
void			ft_rrotate(t_list **lst, char c);
void			ft_multiple(t_list **a, t_list **b, int mov);
t_list			*ft_create_stack(char **argv);
void			ft_algo_fewnums(t_list **a, t_list **b);
void			ft_algo_bubble(t_list **a);
void			ft_algo_select(t_list **a, t_list **b);
void			ft_algo_bucket(t_list **a, t_list **b);
void			ft_algo_binary(t_list **a, t_list **b);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstnew(int content);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstadd_front(t_list **lst, t_list *new);
unsigned int	*ft_standar(t_list *stack);

#endif
