'''
Array (list) in Python
'''
cars = ["Ford", "Volvo", "BMW"]

car1 = cars[0]

print("The first car is a %s." %car1)

#Add
cars.append("Hyundai")

#Remove with pop or remove
cars.remove("Volvo")

#Iterate through the list
for x in range(len(cars)):
	print(cars[x])


#You can also sort, reverse, clear, copy and count (number of occurences)
print(cars.count("Ford"))