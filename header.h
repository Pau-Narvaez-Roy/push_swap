/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 14:22:19 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/06/23 17:28:45 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				num;
	struct s_list	*next;
}					t_list;

float	calcular_desorden(t_list *a);
void	ft_swap(t_list *lst);
void	ft_push(t_list	*lst1, t_list *lst2);
void	ft_rotate(t_list **lst);
void	ft_rrotate(t_list **lst);
void	ft_multiple(t_list lsta, t_list lstb, int mov);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);

#endif