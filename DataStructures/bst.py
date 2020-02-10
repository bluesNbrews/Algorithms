'''
Binary search tree implementation in Python. Methods so far are insertion, search and inorder traversal (depth first search).
Next methods will be deletion, postorder traversal, preorder traversal and level order traversal.
Time complexities are listed below. The space complexity is O(n)
'''

class Node:
	def __init__(self, data):
		self.left = None
		self.right = None
		self.data = data

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

def main():
	myRoot = Node(50)
	insert(myRoot, Node(30))
	insert(myRoot, Node(20))
	insert(myRoot, Node(40))
	insert(myRoot, Node(70))
	insert(myRoot, Node(60))
	insert(myRoot, Node(80))

	printInOrder(myRoot)

	print(search(myRoot,70).data)

if __name__ == "__main__":
	main()