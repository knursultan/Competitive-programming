#include <iostream>

using namespace std;


/*
	root
	parent
	child
	leaf
*/


class BST {
	private:
		struct node {
			int key;
			node* left;
			node* right;
		};
		
		node* root;
		
		void AddLeafPrivate(int key, node* Ptr) {
			if (root == NULL) 
				root = CreateLeaf(key);
			else if (key < Ptr->key) {
				if (Ptr->left != NULL)
					AddLeafPrivate(key, Ptr->left);
				else
					Ptr->left = CreateLeaf(key);
			} else if (key > Ptr->key) {
				if (Ptr->right != NULL)
					AddLeafPrivate(key, Ptr->right);
				else
					Ptr->right = CreateLeaf(key);
			} else
				printf ("The key %d has already been added to the tree\n", key);
		}
		
		void PrintInOrderPrivate(node* Ptr) {
			if (root != NULL) {
				if (Ptr->left != NULL)
					PrintInOrderPrivate(Ptr->left);
				printf ("%d ", Ptr->key);
				
				if (Ptr->right != NULL)
					PrintInOrderPrivate(Ptr->right);
				printf("%d ", Ptr->key);
				
			} else 
				printf ("The tree is empty\n");
		}
		
		
	public:
		// constructure
		BST() {
			root = NULL;	
		}
		
		node* CreateLeaf(int key) {
			node* n = new node;
			n->key = key;
			n->left = NULL;
			n->right = NULL;
			
			return n;
		}
		
		void AddLeaf(int key) {
			cout << key << ' ' << root << endl;
			AddLeafPrivate(key, root);
		}
		
		void PrintInOrder() {
			PrintInOrderPrivate(root);
		}
};

int main() {
	int treeKeys[16] = {50, 76, 21, 4, 32, 64, 15, 52, 14, 100, 83, 2, 3, 70, 87, 80};	
	BST myTree;
	
	printf("Printing the tree in order\nBefore adding numbers\n");
	myTree.PrintInOrder();	

	for (int i = 0; i < 16; i++)
		myTree.AddLeaf(treeKeys[i]);
 
	printf("Printing the tree in order\nAfter adding numbers\n");
	myTree.PrintInOrder();	
	return 0;
}

