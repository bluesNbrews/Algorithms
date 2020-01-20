'''
Now using modularized code with objects. Singly-Linked List in Python.
There are two classes - one for the Node and one for the head (LinkedList)
Functions include print (Methods of LinkedList), size, insert, search, and delete.
There are also getters and setters for the data and next node (methods of Node)
The time complexities are listed below. The space complexity is O(n)
'''

class LinkedList:
	def __init__(self):
		self.head = None

	#The time complexity of print is O(n)
	def print(self):
		current = self.head

		while current:
			print(current.data)
			current = current.nextNode

class Node:
	def __init__(self,data=None,nextNode=None):
		self.data = data
		self.nextNode = nextNode

	#The time complexity of the getters and setters is O(1)
	def get_data(self):
		return self.data

	def set_data(self,data):
		self.data = data

	def get_next(self):
		return self.nextNode

	def set_next(self,nextNode):
		self.nextNode = nextNode

#The time complexity of size is O(n)
def size(self):
	count = 0
	current = self.head

	while current:
		count = count + 1
		current = current.nextNode

	print(count)

#This inserts at the beginning
#The time complexity of print is O(1)
def insert(self,data):
	newNode = Node(data)
	newNode.set_next(self.head)
	self.head = newNode

#The time complexity of print is O(n) 
def search(self, data):	
	current = self.head
	found = False

	while current and found is False:
		if current.get_data() == data:
			found = True
		else:
			current = current.get_next()
	
	if current is None:
		raise ValueError("This node is not in the list.")

	return current

#The time complexity of print is O(n) 
def delete(self, data):

	current = self.head
	found = False
	previous = None

	while current and found is False:
		if current.get_data() == data:
			found = True
		else:
			previous = current
			current = current.get_next()

	if current is None:
		raise ValueError("This node is not in the list.")

	if previous is None:
		self.head = current.get_next()
	else:
		previous.set_next(current.get_next())

def main():
	
	myLinkedList = LinkedList()

	myLinkedList.head = Node(1)
	second = Node(2)
	third = Node(3) 

	myLinkedList.head.nextNode = second
	second.nextNode = third

	myLinkedList.print()
	insert(myLinkedList,4)
	size(myLinkedList)
	searchNode = search(myLinkedList,3)
	print(searchNode.data)
	delete(myLinkedList, 2)
	myLinkedList.print()


if __name__ == "__main__":
	main()