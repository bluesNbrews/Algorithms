/*
Binary search tree implementation in C++. Methods so far are insertion, search and inorder traversal (depth first search).
Next methods will be deletion, postorder traversal, preorder traversal and level order traversal.
Time complexities are listed below. The space complexity is O(n)
*/

#include<iostream>
using namespace std;

class BST{
	int data;
	BST *left, *right;

public:	
	//Default constructor
	BST();
	//Constructor with data value parameter
	BST(int);
	//Declaration for the Insert function
	BST* Insert(BST *, int);
	//Declaration for the Search function
	void Search(BST *, int);
	//Declaration for the Inorder function
	void Inorder(BST *);
};

//Default constructor
BST::BST(){
	data = 0;
	left = NULL;
	right = NULL;
}

//Constructor with data value parameter
BST::BST(int value){
	data = value;
	left = right = NULL;
}

//Best case time complexity is O(logn) and worst case is O(n)
BST* BST::Insert(BST *root, int value){
	if(!root){
		return new BST(value);
	}
	if(value > root->data){
		root->right = Insert(root->right, value);
	}
	else{
		root->left = Insert(root->left, value);
	}
	return root;
}

//Best case time complexity is O(logn) and worst case is O(n)
void BST::Search(BST *root, int key){
	//If root is null, exit
	if(!root)
		return;
	//If the passed in value matches the node data, then search is complete
	if(root->data == key){
		cout << "Found it: " << root->data << endl;
	}
	//Start search down the right side of the BST
	if(root->data < key){
		Search(root->right, key);
	}
	//Start search down the left side of the BST
	else{
		Search(root->left, key);
	}
}

//Inorder tree traversal - O(n) where n is the total number of nodes
//This is an example of a Depth First Search
void BST::Inorder(BST *root){
	if(!root){
		return;
	}
	//First recursively call via the left child
	Inorder(root->left);
	//Print the data of that node
	cout << root->data << endl;
	//Then recursively call the right child
	Inorder(root->right);
}

int main(){
	BST b, *root, s = NULL;
	root = b.Insert(root, 50);

	b.Insert(root, 30);
	b.Insert(root, 20);
	b.Insert(root, 40);
	b.Insert(root, 70);
	b.Insert(root, 60);
	b.Insert(root, 80);

	b.Inorder(root);

	b.Search(root, 70);

	return 0;
}