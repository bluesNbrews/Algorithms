'''
Binary search tree implementation in Python. Methods so far are insertion, search and inorder traversal (depth first search).
Next methods will be deletion, postorder traversal, preorder traversal and level order traversal.
Time complexities are listed below. The space complexity is O(n)

My BST 
              50 
           /     \\ 
          30      70 
         /  \\    /  \
       20   40  60   80 

'''

class Node:
	def __init__(self, data):
		self.left = None
		self.right = None
		self.data = data

#Calculate the height of a tree - from the root to the farthest leaf node
def height(node):
	if node is None:
		return 0
	else:
		lheight = height(node.left)
		rheight = height(node.right)

		if lheight > rheight:
			return lheight + 1
		else:
			return rheight + 1

#Best case time complexity is O(logn) and worst case is O(n)
def insert(root, node):
	#Base case for if the root is null
	if root is None:
		root = node
	#Start with looking at the right of the root or node if the new node data is larger than the root data,
	#otherwise, look at the left of the root or new node
	else:
		if root.data < node.data:
			if root.right is None:
				root.right = node
			else:
				insert(root.right, node)
		else:
			if root.left is None:
				root.left = node
			else:
				insert(root.left, node)

#Best case time complexity is O(logn) and worst case is O(n)
def search(root,key):
	#Base Cases: the root is null or the key is the root data
	if root is None or root.data == key:
		return root
	#Start search down the right side of the BST
	if root.data < key:
		return search(root.right, key)
	#Start search down the left side of the BST
	return search(root.left,key)

#Print nodes on a specified level (e.g. level 1 is only the root node)
def printGivenLevel(root, level):
	if root is None:
		return
	if level == 1:
		print("%d" %root.data)
	elif level > 1:
		printGivenLevel(root.left, level - 1)
		printGivenLevel(root.right, level - 1)

#Use both the height and printGivenLevel functions to traverse the BST in a Breadth First Search manner. 
#The printGivenLevel funciton is usd recursively for all levels of the BST. 
def printLevelOrder(root):
	h = height(root)
	for i in range(1, h + 1):
		printGivenLevel(root, i)

#Inorder tree traversal - O(n) where n is the total number of nodes
#This is an example of a Depth First Search
def printInOrder(root):
	if root:
		#First recursively call via the left child
		printInOrder(root.left)
		#Print the data of that node
		print(root.data)
		#Then recursively call the right child
		printInOrder(root.right)

#Preorder tree traversal - O(n) where n is the total number of nodes
#This is an example of a Depth First Search
def printPreOrder(root):
	if root:
		#Print the data of that node
		print(root.data)
		#First recursively call via the left child
		printPreOrder(root.left)
		#Then recursively call the right child
		printPreOrder(root.right)

#Postorder tree traversal - O(n) where n is the total number of nodes
#This is an example of a Depth First Search
def printPostOrder(root):
	if root:
		#First recursively call via the left child
		printPostOrder(root.left)
		#Then recursively call the right child
		printPostOrder(root.right)
		#Print the data of that node
		print(root.data)

def main():
	myRoot = Node(50)
	insert(myRoot, Node(30))
	insert(myRoot, Node(20))
	insert(myRoot, Node(40))
	insert(myRoot, Node(70))
	insert(myRoot, Node(60))
	insert(myRoot, Node(80))

	printInOrder(myRoot)
	print("\n")

	printPreOrder(myRoot)
	print("\n")

	printPostOrder(myRoot)
	print("\n")

	print(search(myRoot,70).data)
	print("\n")

	printLevelOrder(myRoot)

if __name__ == "__main__":
	main()