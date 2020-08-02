#
# Author   : BurningTiles
# Question : A+B
#

while True:
	try:
		a,b = map(int,input().split())
		print(a+b)
	except EOFError:
		break

#
# Question
# https://www.hackerearth.com/practice/basic-programming/complexity-analysis/time-and-space-complexity/practice-problems/algorithm/a-b-4/
#