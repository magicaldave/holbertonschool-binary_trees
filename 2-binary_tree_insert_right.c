#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_right - create binary tree node
 * @parent : pointer
 * @value : value of node
 * Return: node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	node->right = parent->right;
	parent->right = node;

	if (node->right)
		node->right->parent = node;

	return (node);
}
