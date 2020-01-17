#Leetcode Two Sum problem - Solution is One-pass Hash Table
#Time complexity is O(n) - Traverse the list containing n elements only once. Each lookup is O(1) time.
#Space omplexity is O(n) - The extra space required depends on the number of items stored in the hash table, which stores at most n elements. 


def twoSum(nums, target):
	complements = {}
	for id, value in enumerate(nums):
		if value in complements:
			#2nd iteration part A
			print([complements[value], id])
		complements[target - value] = id
		#1st iteration -- complements[7] = 0
		#2nd iteration part B-- complements[2] = 1
		#3rd iteration -- complements[-2] = 2
		#4th iteration -- complements[-6] = 3
	#Check the key value pairs below
	'''
	for k in complements:
		print(k, complements[k])
	'''

def main():
	
	nums = [2,7,11,15]
	target = 9

	twoSum(nums, target)

if __name__ == "__main__":
	main()