'''
Reverse Integer Problem: Given a 32-bit signed integer, reverse digits of an integer.

Corner / edge cases:

Ex1:
Input: 123
Output: 321

Ex2:
Input: -123
Output: -321

Ex3:
Input: 120
Output: 21
'''

class Solution:
	def __init__(self, myInt):
		self.myInt = myInt	

	#Main 
	def reverse(self):
		#Find if the int is positive or negative (1 is positive and -1 for negative)
		sign = (self.myInt > 1) - (self.myInt < 1)
		#Get the positive integer as a string 
		myString = str(abs(self.myInt))
		#Reverse the string 
		myStringRev = myString[::-1]
		#Check if the integer is positive and negative and return as such
		if self.myInt == abs(self.myInt):
			return int(myStringRev) #Does not keep the leading zero as in ex 3
		elif sign == -1:
			return int(myStringRev) * -1

mySolution = Solution(120)

myReverse = mySolution.reverse()

print("This is my integer in reverse: {}".format(myReverse))

