#This program is a smiple implementation of a linear search
#Both the time and space complexities are O(n)

def linear_search(list, key):
	'''If key is in the list returns its position in the list, otherwise returns -1.'''
	for i, item in enumerate(list):
		if item == key:
			return i
	return -1

def main():

	myList = ['alice','bob','charlie']
	myKey = 'bob'
	
	print(linear_search(myList, myKey))

if __name__ == "__main__":
	main()