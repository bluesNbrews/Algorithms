/*
Binary search tree implementation in C++. Methods so far are insertion, search and inorder traversal (depth first search).
Next methods will be deletion, postorder traversal, preorder traversal and level order traversal.
Time complexities are listed below. The space complexity is O(n)

My BST 
              50 
           /     \\ 
          30      70 
         /  \\    /  \\ 
       20   40  60   80 
*/

#include<iostream>
using namespace std;

class BST{

public:	
	int data;
	BST *left, *right;
	//Default constructor
	BST();
	//Constructor with data value parameter
	BST(int);
	//Declaration for the Hieght function
	int Height(BST *);
	//Declaration for the Insert function
	BST* Insert(BST *, int);
	//Declaration for the Search function
	void Search(BST *, int);
	//Declaration for the printGivenLevel function
	void PrintGivenLevel(BST *, int);
	//Declaration for the printGivenLevel function
	void PrintLevelOrder(BST *);
	//Declaration for the Inorder function
	void Inorder(BST *);
	//Declaration for the Preorder function
	void Preorder(BST *);
	//Declaration for the Postorder function
	void Postorder(BST *);
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

//Calculate the height of a tree - from the root to the farthest leaf node
int BST::Height(BST *root){
	if(root == NULL)
		return 0;
	else{
		int lheight = Height(root->left);
		int rheight = Height(root->right);

		if(lheight > rheight)
			return(lheight + 1);
		else
			return(rheight + 1);
	}
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

//Print nodes on a specified level (e.g. level 1 is only the root node)
void BST::PrintGivenLevel(BST *root, int level){
	if(root == NULL)
		return;
	if(level == 1)
		cout << root->data << endl;
	else if (level > 1){
		PrintGivenLevel(root->left, level - 1);
		PrintGivenLevel(root->right, level - 1);
	}
}

//Use both the height and printGivenLevel functions to traverse the BST in a Breadth First Search manner. 
//The printGivenLevel funciton is usd recursively for all levels of the BST. 
void BST::PrintLevelOrder(BST *root){
	int height = Height(root);
	for(int i = 1; i <= height; i++){
		PrintGivenLevel(root, i);
	}
}

//Inorder tree traversal - O(n) where n is the total number of nodes
//This is an example of a Depth First Search
void BST::Inorder(BST *root){
	if(root){
		//First recursively call via the left child
		Inorder(root->left);
		//Print the data of that node
		cout << root->data << endl;
		//Then recursively call the right child
		Inorder(root->right);
	}
}

//Preorder tree traversal - O(n) where n is the total number of nodes
//This is an example of a Depth First Search
void BST::Preorder(BST *root){
	if(root){
		//Print the data of that node
		cout << root->data << endl;
		//First recursively call via the left child
		Preorder(root->left);
		//Then recursively call the right child
		Preorder(root->right);
	}
}

//Postorder tree traversal - O(n) where n is the total number of nodes
//This is an example of a Depth First Search
void BST::Postorder(BST *root){
	if(root){
		//First recursively call via the left child
		Postorder(root->left);
		//Then recursively call the right child
		Postorder(root->right);
		//Print the data of that node
		cout << root->data << endl;
	}
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
	b.Preorder(root);
	b.Postorder(root);

	b.Search(root, 70);

	cout << "The height of the BST is: " << b.Height(root) << endl;

	b.PrintLevelOrder(root);

	return 0;
}