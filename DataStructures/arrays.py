'''
Array (list) in Python
I've used allocation, access, insertion, deletion.
Search isn't used here but it would take O(n) time (time complexity).
All time complexities are amortized. 
'''

#The space complexity is O(n)
cars = ["Ford", "Volvo", "BMW"]

#Access takes O(1) time
car1 = cars[0]

print("The first car is a %s." %car1)

#Insertion takes O(1) time in this case but would normally take O(n) for a specific value in an array
cars.append("Hyundai")

#Deletion takes O(n) time
cars.remove("Volvo")

#Iterate through the list
for x in range(len(cars)):
	print(cars[x])


#You can also sort, reverse, clear, copy and count (number of occurences)
print(cars.count("Ford"))