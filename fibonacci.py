#O(2 ^ n) time | O(n) space
def getNthFib(n):
	if n == 2:
		return 1
	elif n == 1:
		return 0
	else:
		return getNthFib(n - 2) + getNthFib(n - 1)

#O(n) time | O(n) space
#Utilize a hash map (dictionary in Python), initially passing in the dictionary with the first 2 values of the Fibonacci sequence
def getNthFib(n, memoize = {2:1, 1:0}):
	if n in memoize:
		return memoize[n]
	else:
		memoize[n] = getNthFib(n - 2, memoize) + getNthFib(n - 1, memoize)
    	return memoize[n]