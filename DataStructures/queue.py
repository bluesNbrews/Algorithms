'''
Queue implementation in Python using a deque. Objects and methods are used in this implementaion.
Access, insertion, and deletion are included. Search is not included but would have a time complexity of O(n).
The other time complexities are listed below. The space complexity is O(n). 
'''

from collections import deque

class Queue:
	def __init__(self):
		self.items = deque()
	#Time complexity is O(1)
	def isEmpty(self):
		return self.items == deque()
	#Time complexity is O(1)
	def enqueue(self, item):
		self.items.append(item)
	#Time complexity is O(1)
	def dequeue(self):
		return self.items.popleft()
	#Time complexity is O(1)
	def size(self):
		return len(self.items)

def main():
	myQueue = Queue()

	print(myQueue.isEmpty())
	print(myQueue.size())

	myQueue.enqueue(10)
	myQueue.enqueue(20)
	myQueue.enqueue(30)
	myQueue.enqueue(40)
	myQueue.enqueue(50)

	print(myQueue.isEmpty())
	print(myQueue.size())

	myQueue.dequeue()
	myQueue.dequeue()

	#Time complexity is O(n)
	for x in range(len(myQueue.items)):
		print(myQueue.items[x])

	#Time complexity is O(1)
	print(myQueue.items)

if __name__ == "__main__":
	main()