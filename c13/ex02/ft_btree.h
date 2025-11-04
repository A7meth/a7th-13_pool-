/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7th <a7th@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:00:00 by a7th              #+#    #+#             */
/*   Updated: 2025/11/01 16:00:00 by a7th             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct s_btree
{
	void			*item;
	struct s_btree	*left;
	struct s_btree	*right;
}	t_btree;

t_btree	*btree_create_node(void *item);

#endif
