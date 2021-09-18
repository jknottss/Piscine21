/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 20:00:28 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/17 21:20:23 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*tree;

	tree = malloc(sizeof(t_btree));
	if (tree == NULL)
		return (tree);
	tree->item = item;
	tree->left = 0;
	tree->right = 0;
	return (tree);
}
