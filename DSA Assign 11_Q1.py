def checkSparse(n):

	if (n & (n>>1)):
		return 0

	return 1
print(checkSparse(72))
print(checkSparse(12))
print(checkSparse(2))
print(checkSparse(30))
