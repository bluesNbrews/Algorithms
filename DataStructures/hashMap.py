'''
Hash Map (Dictionary) in Python
1) Retrieve existing value based on key
2) Add key value pair
3) Print all keys
4) Print all values
Search, insertion, and deletion (not used here) are all performed in O(1) time (amortized). 
The space complexity is O(n)
'''


def main():
	
	myHashMap = {'22209':'Arlington','78204':'San Antonio'}
	
	#1
	#print(myHashMap.get('22209'))
	
	#2
	myHashMap['34239'] = 'Sarasota'
	
	#3 and #4
	
	#print(myHashMap.keys())
	#print(myHashMap.values())
	
	#There are a few ways to iterate through the key value pairs
	for key in myHashMap:
		print(key, ' ', myHashMap[key])

	#This is a good way to loop through the hash map to modify values and keys
	for k, v in myHashMap.items():
		print(k, ' ', v)

if __name__ == "__main__":
	main()

