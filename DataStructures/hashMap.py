'''
Hash Map (Dictionary) in Python
1) Retrieve existing value based on key
2) Add key value pair
3) Print all keys
4) Print all values
Search, insertion, and deletion (not used here) are all performed in O(1) time (amortized). 
The space complexity is O(n)
'''

myHashMap = {'22209':'Arlington','78204':'San Antonio'}

#1
print(myHashMap.get('22209'))

#2
myHashMap['34239'] = 'Sarasota'

#3 and #4
print(myHashMap.keys())
print(myHashMap.values())


