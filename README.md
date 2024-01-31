# Binary Trees Project README

## 0x1D. C - Binary trees

This project is part of the Holberton School curriculum and focuses on implementing binary trees in the C programming language. The goal is to gain a deep understanding of binary trees, their properties, and various operations that can be performed on them.

### Project Information

- **Author 1:** Paschal Ugwu
- **Author 2:** Amarachi Nnanta

### Learning Objectives

By completing this project, you should be able to:

- Explain what a binary tree is
- Differentiate between a binary tree and a Binary Search Tree
- Understand the potential time complexity gain compared to linked lists
- Define the concepts of depth, height, and size of a binary tree
- Implement different traversal methods for binary trees
- Recognize characteristics of complete, full, perfect, and balanced binary trees

### Requirements

#### General

- Allowed Editors: vi, vim, emacs
- Compilation: Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files must end with a new line
- A README.md file at the root of the project folder is mandatory
- Code should adhere to the Betty style and will be checked using betty-style.pl and betty-doc.pl
- No use of global variables
- No more than 5 functions per file
- Standard library usage is allowed
- The prototypes of all functions should be included in the header file called `binary_trees.h`
- Header files should be include guarded


### Data Structures

- Use the following data structures and types for binary trees, and include them in `binary_trees.h`.

#### Basic Binary Tree

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

#### Binary Search Tree

```c
typedef struct binary_tree_s bst_t;
```

#### AVL Tree

```c
typedef struct binary_tree_s avl_t;
```

#### Max Binary Heap

```c
typedef struct binary_tree_s heap_t;
```

### Print Function

- A print function is provided for visualization purposes. It is not required to be pushed to the repository and may not be used during correction.

### Tasks

#### 0. New Node

Write a function that creates a binary tree node.

```c
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
```

- `parent`: pointer to the parent node of the node to create
- `value`: value to put in the new node
- Returns a pointer to the new node, or NULL on failure

#### 1. Insert Left

Write a function that inserts a node as the left-child of another node.

```c
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
```

- `parent`: pointer to the node to insert the left-child in
- `value`: value to store in the new node
- Returns a pointer to the created node, or NULL on failure or if `parent` is NULL

#### 2. Insert Right

Write a function that inserts a node as the right-child of another node.

```c
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
```

- `parent`: pointer to the node to insert the right-child in
- `value`: value to store in the new node
- Returns a pointer to the created node, or NULL on failure or if `parent` is NULL

#### 3. Delete

Write a function that deletes an entire binary tree.

```c
void binary_tree_delete(binary_tree_t *tree);
```

- `tree`: pointer to the root node of the tree to delete
- If `tree` is NULL, do nothing

#### 4. Is Leaf

Write a function that checks if a node is a leaf.

```c
int binary_tree_is_leaf(const binary_tree_t *node);
```

- `node`: pointer to the node to check
- Returns 1 if `node` is a leaf, otherwise 0
- If `node` is NULL, return 0

#### 5. Is Root

Write a function that checks if a given node is a root.

```c
int binary_tree_is_root(const binary_tree_t *node);
```

- `node`: pointer to the node to check
- Returns 1 if `node` is a root, otherwise 0
- If `node` is NULL, return 0

#### 6. Pre-order Traversal

Write a function that goes through a binary tree using pre-order traversal.

```c
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
```

- `tree`: pointer to the root node of the tree to traverse
- `func`: pointer to a function to call for each node; the value in the node must be passed as a parameter to this function
- If `tree` or `func` is NULL, do nothing

#### 7. In-order Traversal

Write a function that goes through a binary tree using in-order traversal.

```c
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
```

- `tree`: pointer to the root node of the tree to traverse
- `func`: pointer to a function to call for each node; the value in the node must be passed as a parameter to this function
- If `tree` or `func` is NULL, do nothing

#### 8. Post-order Traversal

Write a function that goes through a binary tree using post-order traversal.

```c
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
```

- `tree`: pointer to the root node of the tree to traverse
- `func`: pointer to a function to call for each node; the value in the node must be passed as a parameter to this function
- If `tree` or `func` is NULL, do nothing

#### 9

. Height

Write a function that measures the height of a binary tree.

```c
size_t binary_tree_height(const binary_tree_t *tree);
```

- `tree`: pointer to the root node of the tree to measure the height
- Returns the height of the tree, or 0 if `tree` is NULL

#### 10. Depth

Write a function that measures the depth of a node in a binary tree.

```c
size_t binary_tree_depth(const binary_tree_t *tree);
```

- `tree`: pointer to the node to measure the depth
- Returns the depth of the node, or 0 if `tree` is NULL
- A NULL pointer is considered at depth 0

#### 11. Size

Write a function that measures the size of a binary tree.

```c
size_t binary_tree_size(const binary_tree_t *tree);
```

- `tree`: pointer to the root node of the tree to measure the size
- Returns the size of the tree, or 0 if `tree` is NULL

#### 12. Leaves

Write a function that counts the leaves in a binary tree.

```c
size_t binary_tree_leaves(const binary_tree_t *tree);
```

- `tree`: pointer to the root node of the tree to count the number of leaves
- Returns the number of leaves in the tree, or 0 if `tree` is NULL

#### 13. Balance Factor

Write a function that measures the balance factor of a binary tree.

```c
int binary_tree_balance(const binary_tree_t *tree);
```

- `tree`: pointer to the root node of the tree to measure the balance factor
- Returns the balance factor of the tree, or 0 if `tree` is NULL

#### 14. Is Full

Write a function that checks if a binary tree is full.

```c
int binary_tree_is_full(const binary_tree_t *tree);
```

- `tree`: pointer to the root node of the tree to check
- Returns 1 if the tree is full, 0 otherwise
- If `tree` is NULL, return 0

#### 15. Is Perfect

Write a function that checks if a binary tree is perfect.

```c
int binary_tree_is_perfect(const binary_tree_t *tree);
```

- `tree`: pointer to the root node of the tree to check
- Returns 1 if the tree is perfect, 0 otherwise
- If `tree` is NULL, return 0

#### 16. Sibling

Write a function that finds the sibling of a node.

```c
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
```

- `node`: pointer to the node to find the sibling
- Returns a pointer to the sibling node, or NULL if `node` has no sibling
- If `node` is NULL or has no sibling, return NULL

#### 17. Uncle

Write a function that finds the uncle of a node.

```c
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
```

- `node`: pointer to the node to find the uncle
- Returns a pointer to the uncle node, or NULL if `node` has no uncle
- If `node` is NULL or has no uncle, return NULL

## 19. Lowest common ancestor
### Advanced

Write a function that finds the lowest common ancestor of two nodes

**Prototype:**
```c
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);
```

- `first`: Pointer to the first node
- `second`: Pointer to the second node

**Returns:**
- A pointer to the lowest common ancestor node of the two given nodes.
- If no common ancestor was found, the function returns `NULL`

### Example
```c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

void launch_test(binary_tree_t *n1, binary_tree_t *n2)
{
    binary_tree_t *ancestor;

    ancestor = binary_trees_ancestor(n1, n2);
    printf("Ancestor of [%d] & [%d]: ", n1->n, n2->n);
    if (!ancestor)
        printf("(nil)\n");
    else
        printf("%d\n", ancestor->n);
}

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    // ... (your tree setup)
    binary_tree_print(root);

    launch_test(root->left, root->right);
    launch_test(root->right->left, root->right->right->right);
    launch_test(root->right->right, root->right->right->right);

    return (0);
}
```

**Repository:**
- GitHub repository: binary_trees
- File: [100-binary_trees_ancestor.c]

## 20. Level-order traversal
### Advanced

Write a function that goes through a binary tree using level-order traversal

**Prototype:**
```c
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
```

- `tree`: Pointer to the root node of the tree to traverse
- `func`: Pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is `NULL`, do nothing

### Example
```c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

void print_num(int n)
{
    printf("%d\n", n);
}

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    // ... (your tree setup)
    binary_tree_print(root);
    binary_tree_levelorder(root, &print_num);
    binary_tree_delete(root);

    return (0);
}
```

**Repository:**
- GitHub repository: binary_trees
- File: [101-binary_tree_levelorder.c]

## 21. Is complete
### Advanced

Write a function that checks if a binary tree is complete

**Prototype:**
```c
int binary_tree_is_complete(const binary_tree_t *tree);
```

- `tree`: Pointer to the root node of the tree to check
- If `tree` is `NULL`, the function must return 0

### Example
```c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;
    int complete;

    root = binary_tree_node(NULL, 98);
    // ... (your tree setup)
    binary_tree_print(root);
    complete = binary_tree_is_complete(root);
    printf("Is %d complete: %d\n", root->n, complete);

    // ... (more test cases)

    binary_tree_delete(root);
    return (0);
}
```

**Repository:**
- GitHub repository: binary_trees
- File: [102-binary_tree_is_complete.c]

## 22. Rotate left
### Advanced

Write a function that performs a left-rotation on a binary tree

**Prototype:**
```c
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
```

- `tree`: Pointer to the root node of the tree to rotate
- Returns a pointer to the new root node of the tree once rotated

### Example
```c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;
    // ... (your tree setup)
    binary_tree_print(root);
    printf("Rotate-left %d\n", root->n);
    root = binary_tree_rotate_left(root);
    binary_tree_print(root);

    // ... (more test cases)

    return (0);
}
```

**Repository:**
- GitHub repository: binary_trees
- File: [103-binary_tree_rotate_left.c]

## 23. Rotate right
### Advanced

Write a function that performs a right-rotation on a binary tree

**Prototype:**
```c
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
```

- `tree`: Pointer to the root node of the tree to rotate
- Returns a pointer to the new root node of the tree once rotated

### Example
```c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;
    // ... (your tree setup)
    binary_tree_print(root);
    printf("Rotate-right %d\n", root->n);
    root = binary_tree_rotate_right(root);
    binary_tree_print(root);

    // ... (more test cases)

    return (0);
}
```

**Repository:**
- GitHub repository: binary_trees
- File: [104-binary_tree_rotate_right.c]

## 24. Is BST
### Advanced

Write a function that checks if a binary tree is a valid Binary Search Tree

**Prototype:**
```c
int binary_tree_is_bst(const binary_tree_t *tree);
```

- `tree`: Pointer to the root node of the tree to check
- Returns 1 if `tree` is a valid BST, and 0 otherwise
- If `tree` is `NULL`, returns 0

### Example
```c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;
    int bst;

    root = binary_tree_node(NULL, 98);
    // ... (your tree setup)
    binary_tree_print(root);
    bst = binary_tree_is_bst(root);
    printf("Is %d bst: %d\n", root->n, bst);

    // ... (more test cases)

    binary_tree_delete(root);
    return (0);
}
```

**Repository:**
- GitHub repository: binary_trees
- File: [110-binary_tree_is_bst.c]

## 25. BST - Insert
### Advanced

Write a function that

 inserts a value in a Binary Search Tree

**Prototype:**
```c
bst_t *bst_insert(bst_t **tree, int value);
```

- `tree`: Double pointer to the root node of the BST
- `value`: Value to insert in the tree

### Example
```c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
    bst_t *root;
    bst_t *node;

    root = NULL;
    // ... (your tree setup)
    binary_tree_print(root);
    node = bst_insert(&root, 98);
    binary_tree_print(root);
    printf("Inserted: %d\n", node->n);

    // ... (more test cases)

    return (0);
}
```

**Repository:**
- GitHub repository: binary_trees
- File: [111-bst_insert.c]

### Task 29: Big O #BST

#### Operations on a Binary Search Tree (BST):

1. **Inserting the value n:**
   - Average Time Complexity: O(log n)

2. **Removing the node with the value n:**
   - Average Time Complexity: O(log n)

3. **Searching for a node in a BST of size n:**
   - Average Time Complexity: O(log n)

**Repo:**
- GitHub repository: [binary_trees]
- File: [115-O]

### Task 30: Is AVL

#### Check if a binary tree is a valid AVL Tree:

- **Function Prototype:**
  ```c
  int binary_tree_is_avl(const binary_tree_t *tree);
  ```
- **Properties of an AVL Tree:**
  1. An AVL Tree is a BST.
  2. The difference between heights of left and right subtrees cannot be more than one.
  3. The left and right subtrees must also be AVL trees.

**Repo:**
- GitHub repository: [binary_trees]
- File: [120-binary_tree_is_avl.c]

### Task 31: AVL - Insert

#### Insert a value in an AVL Tree:

- **Function Prototype:**
  ```c
  avl_t *avl_insert(avl_t **tree, int value);
  ```
- **Conditions:**
  - If the address stored in `tree` is NULL, the created node must become the root node.
  - The resulting tree after insertion must be a balanced AVL Tree.

**Repo:**
- GitHub repository: [binary_trees]
- File: [121-avl_insert.c]

### Task 32: AVL - Array to AVL

#### Build an AVL tree from an array:

- **Function Prototype:**
  ```c
  avl_t *array_to_avl(int *array, size_t size);
  ```
- **Conditions:**
  - If a value of the array is already present in the tree, this value must be ignored.

**Repo:**
- GitHub repository: [binary_trees]
- File: [122-array_to_avl.c]

### Task 33: AVL - Remove

#### Remove a node from an AVL tree:

- **Function Prototype:**
  ```c
  avl_t *avl_remove(avl_t *root, int value);
  ```
- **Conditions:**
  - Once located, the node containing a value equals to `value` must be removed and freed.
  - If the node to be deleted has two children, it must be replaced with its first in-order successor.
  - After deletion, the tree must be rebalanced if necessary.

**Repo:**
- GitHub repository: [binary_trees]
- File: [123-avl_remove.c]

### Task 34: AVL - From sorted array

#### Build an AVL tree from a sorted array:

- **Function Prototype:**
  ```c
  avl_t *sorted_array_to_avl(int *array, size_t size);
  ```
- **Conditions:**
  - No duplicate values in the array.
  - Not allowed to rotate; only two functions allowed.

**Repo:**
- GitHub repository: [binary_trees]
- File: [124-sorted_array_to_avl.c]

### Task 35: Big O #AVL Tree

#### Average time complexities of operations on an AVL Tree:

1. **Inserting the value n:**
   - Average Time Complexity: O(log n)

2. **Removing the node with the value n:**
   - Average Time Complexity: O(log n)

3. **Searching for a node in an AVL tree of size n:**
   - Average Time Complexity: O(log n)

**Repo:**
- GitHub repository: [binary_trees]
- File: [125-O]

### Task 36: Is Binary heap

#### Check if a binary tree is a valid Max Binary Heap:

- **Function Prototype:**
  ```c
  int binary_tree_is_heap(const binary_tree_t *tree);
  ```
- **Properties of a Max Binary Heap:**
  1. It’s a complete tree.
  2. In a Max Binary Heap, the value at the root must be maximum among all values present.

**Repo:**
- GitHub repository: [binary_trees]
- File: [130-binary_tree_is_heap.c]

### Task 37: Heap - Insert

#### Insert a value in Max Binary Heap:

- **Function Prototype:**
  ```c
  heap_t *heap_insert(heap_t **root, int value);
  ```
- **Conditions:**
  - If the address stored in `root` is NULL, the created node must become the root node.
  - Max Heap

 property must be maintained after insertion.

**Repo:**
- GitHub repository: [binary_trees]
- File: [131-heap_insert.c]

### Task 38: Heap - Extract

#### Extract the root value of a Max Binary Heap:

- **Function Prototype:**
  ```c
  int heap_extract(heap_t **root);
  ```
- **Conditions:**
  - The extracted value is the root value of the Max Binary Heap.
  - Max Heap property must be maintained after extraction.

**Repo:**
- GitHub repository: [binary_trees]
- File: [132-heap_extract.c]

### Task 39: Big O #Binary Heap

#### Average time complexities of operations on a Max Binary Heap:

1. **Inserting the value n:**
   - Average Time Complexity: O(log n)

2. **Extracting the root value:**
   - Average Time Complexity: O(log n)

**Repo:**
- GitHub repository: [binary_trees]
- File: [135-O]

### Testing

You can use the provided `binary_tree_print.c` file to print the binary tree structure and check if your functions are working correctly.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/* Original code from http://stackoverflow.com/a/13755911/5184480 */

/**
 * print_t - Stores recursively each level in an array of strings
 *
 * @tree: Pointer to the node to print
 * @offset: Offset to print
 * @depth: Depth of the node
 * @s: Buffer
 *
 * Return: length of printed tree after process
 */
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s)
{
	char b[6];
	int width, left, right, is_left, i;

	if (!tree)
		return (0);
	is_left = (tree->parent && tree->parent->left == tree);
	width = sprintf(b, "(%03d)", tree->n);
	left = print_t(tree->left, offset, depth + 1, s);
	right = print_t(tree->right, offset + left + width, depth + 1, s);
	for (i = 0; i < width; i++)
		s[depth][offset + left + i] = b[i];
	if (depth && is_left)
	{
		for (i = 0; i < width + right; i++)
			s[depth - 1][offset + left + width / 2 + i] = '-';
		s[depth - 1][offset + left + width / 2] = '.';
	}
	else if (depth && !is_left)
	{
		for (i = 0; i < left + width; i++)
			s[depth - 1][offset - width / 2 + i] = '-';
		s[depth - 1][offset + left + width / 2] = '.';
	}
	return (left + width + right);
}

/**
 * _height - Measures the height of a binary tree
 *
 * @tree: Pointer to the node to measures the height
 *
 * Return: The height of the tree starting at @node
 */
static size_t _height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + _height(tree->left) : 0;
	height_r = tree->right ? 1 + _height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_print - Prints a binary tree
 *
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	char **s;
	size_t height, i, j;

	if (!tree)
		return;
	height = _height(tree);
	s = malloc(sizeof(*s) * (height + 1));
	if (!s)
		return;
	for (i = 0; i < height + 1; i++)
	{
		s[i] = malloc(sizeof(**s) * 255);
		if (!s[i])
			return;
		memset(s[i], 32, 255);
	}
	print_t(tree, 0, 0, s);
	for (i = 0; i < height + 1; i++)
	{
		for (j = 254; j > 1; --j)
		{
			if (s[i][j] != ' ')
				break;
			s[i][j] = '\0';
		}
		printf("%s\n", s[i]);
		free(s[i]);
	}
	free(s);
}
```
