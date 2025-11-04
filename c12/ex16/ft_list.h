/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7meth <a7meth@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:00:00 by a7meth            #+#    #+#             */
/*   Updated: 2025/11/01 15:00:00 by a7meth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
	void			*data;
	struct s_list	*next;
}	t_list;

t_list	*ft_create_elem(void *data);

#endif
