#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - create binary tree node
 * @parent : pointer
 * @value : value of node
 * Return: node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node ==  NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
