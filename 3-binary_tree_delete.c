#include "binary_trees.h"
/**
 * binary_tree_delete - Free entire tree using recursion it free the node
 * when node left and right are NULL
 * @tree: Tree to free
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}

		free(tree);
	}

}
