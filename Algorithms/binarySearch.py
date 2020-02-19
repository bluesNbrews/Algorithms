#This program is a smiple implementation of a binary search
#The time complexity is O(logn) *log base 2
#The space complexity is O(n)

def binary_search(list,key):
	'''Returns the position of key in the list if found, -1 otherwise.
	List must be sorted.
	'''
	left = 0
	right = len(list) - 1
	while left <= right:
		middle = (left + right) // 2

		if list[middle] == key:
			return middle
		if list[middle] > key:
			right = middle -1
		if list[middle] < key:
			left = middle + 1
	return -1

def main():
	myList = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
	myKey = 13

	print(binary_search(myList, myKey))

if __name__ == "__main__":
	main()
