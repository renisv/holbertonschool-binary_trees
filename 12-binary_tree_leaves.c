#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t left_leaves = 0;
    size_t right_leaves = 0;
    
    if (tree == NULL)
        return (0);
    
    if (!tree->left  && !tree->right)
        return (1);
    
    if (tree->left != NULL)
        left_leaves = binary_tree_leaves(tree->left);

    if (tree->right != NULL)
        right_leaves = binary_tree_leaves(tree->right);
    
    return (left_leaves + right_leaves);
}