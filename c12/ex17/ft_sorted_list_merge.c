/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a7meth <a7meth@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:00:00 by a7meth            #+#    #+#             */
/*   Updated: 2025/11/01 15:00:00 by a7meth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1,
		t_list *begin_list2, int (*cmp)(void *, void *))
{
	t_list	*next;

	while (begin_list2)
	{
		next = begin_list2->next;
		ft_sorted_list_insert(begin_list1,
			begin_list2->data, cmp);
		begin_list2 = next;
	}
}
/*
#include <stdio.h>
int cmp_str(void *a, void *b)
{
	char *s1=a,*s2=b;
	int i=0;
	while(s1[i]&&s2[i]&&s1[i]==s2[i])i++;
	return(s1[i]-s2[i]);
}
void print_list(t_list *l)
{while(l){printf("%s -> ",(char*)l->data);l=l->next;}printf("NULL\n\n");}
int main(void)
{
	t_list *l1=NULL,*l2=NULL;
	ft_sorted_list_insert(&l1,"banana",cmp_str);
	ft_sorted_list_insert(&l1,"apple",cmp_str);
	ft_sorted_list_insert(&l2,"cherry",cmp_str);
	ft_sorted_list_insert(&l2,"Sara✨",cmp_str);
	printf("Before merge:\nL1: "); print_list(l1);
	printf("L2: "); print_list(l2);
	ft_sorted_list_merge(&l1,l2,cmp_str);
	printf("After merge:\nL1: "); print_list(l1);
}*/
