'''
List implementation of a stack in Python

myStack = []

myStack.append('1')
myStack.append('2')
myStack.append('3')

print(type(myStack))

print(myStack)
myStack.pop()

print(myStack)
myStack.pop()

print(myStack)
myStack.pop()

print(myStack)
'''
#The deque is a better choice for non-threaded programs than the list.
#This is because a list uses contiguous memory (if full, allocating a new block and appending to it takes longer) while the deque uses a doubly linked list (resulting in constant time operations for append and pop)
#While deque is faster for push and pop, it is slower for getting a specific element in the data structure. It will have to walk through, resulting in O(n) time (where a list would be O(1) time)
#If threading, a LifoQueue would be a better choice. 
#The space complexity is O(n)

from collections import deque

class Stack:
    def __init__(self):
        self.items = deque()

    def isEmpty(self):
        return self.items == []

    #Time complexity is O(1)
    def push(self,item):
        self.items.append(item)

    #Time complexity is O(1)
    def pop(self):
        return self.items.pop()

    #Time complexity is O(n)
    def peek(self):
        return self.items[len(self.items) - 1]

    #Time complexity is O(n)
    def size(self):
        return len(self.items)

myStack = Stack()

myStack.push('1')
myStack.push('2')
myStack.push('3')

print(myStack.items)
myStack.pop()

print(myStack.isEmpty())
myStack.push('5')
print(myStack.peek())
print(myStack.size())

print(myStack.items)






