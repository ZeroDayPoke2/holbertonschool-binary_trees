#include "binary_trees.h"
#include <math.h>

/**
 * countNodes - counts nodes in tree
 * @tree: root node to check perfectness w respect to
 * Return: node count
 */
int countNodes(const binary_tree_t *tree)
{
	if (!(tree))
		return (0);
	return (1 + countNodes(tree->left) + countNodes(tree->right));
}

/**
 * heightT - calc heightT recursively
 * @tree: root node to check perfectness w respect to
 * Return: heightT
 */
int heightT(const binary_tree_t *tree)
{
	if (!(tree))
		return (-1);
	return (1 + heightT(tree->left));
}

/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: root node to check perfectness w respect to
 * Return: 1 if perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!(tree))
		return (0);
	int nodes = countNodes(tree);
	int h = heightT(tree);

	return (nodes == (int)(pow(2, h + 1) - 1));
}
