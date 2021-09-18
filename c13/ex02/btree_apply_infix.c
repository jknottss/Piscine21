/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 21:19:34 by jknotts           #+#    #+#             */
/*   Updated: 2021/09/17 22:07:35 by jknotts          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	{
		btree_apply_infix(root->left, applyf);
		if (root)
			applyf(root->item);
		if (root->right)
			btree_apply_infix(root->right, applyf);
	}
}
