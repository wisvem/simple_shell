#include "binary_trees.h"
/**
 * bst_remove - Searches for a value in a Binary Search Tree.
 *
 *  Arguments:
 *    @root:  - Pointer to the BST to analyze.
 *    @value: - Value to remove from BST.
 *
 *    Return: - Pointer to new root.
 */

bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *temp = NULL, *leaf = NULL;

	leaf = bst_search(root, value);
	if (!leaf)
		return (root);
	if (leaf->left && !leaf->right)
	{
		for (temp = leaf->left; temp->right; temp = temp->right)
			;
		if (temp != leaf->left)
		{
			temp->parent->right = temp->left;
			temp->left = leaf->left;
		}
		temp->right = leaf->right, temp->parent = leaf->parent;
	}
	else if (leaf->right)
	{
		for (temp = leaf->right; temp->left; temp = temp->left)
			;
		if (temp != leaf->right)
		{
			temp->parent->left = temp->right;
			temp->right = leaf->right;
		}
		temp->left = leaf->left, temp->parent = leaf->parent;
	}
	if (leaf->parent && leaf->parent->right == leaf)
		leaf->parent->right = temp;
	if (leaf->parent && leaf->parent->left == leaf)
		leaf->parent->left = temp;
	free(leaf);
	if (temp->right && temp)
		temp->right->parent = temp;
	if (temp->left && temp)
		temp->left->parent = temp;
	if (!temp->parent)
		return (temp);
	return (root);
}

/**
 * bst_search - Searches for a value in a Binary Search Tree.
 *
 *  Arguments:
 *    @tree:  - Pointer to the BST to analyze.
 *    @value: - Value to find in BST.
 *
 *    Return: - Pointer to the matching node.
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node = NULL;

	if (!tree)
		return (NULL);
	node = (bst_t *)tree;
	while (node)
	{
		if (node->n == value)
			return (node);
		if (node->n < value)
			node = node->right;
		else
			node = node->left;
	}
	return (NULL);
}
