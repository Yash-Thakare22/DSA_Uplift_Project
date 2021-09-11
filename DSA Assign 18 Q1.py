#Q1}
def getInvCount(arr, n):

	inv_count = 0
	for i in range(n):
		for j in range(i + 1, n):
			if (arr[i] > arr[j]):
				inv_count += 1

	return inv_count
	
arr = [1, 20, 6, 4, 5]
n = len(arr)
print("Number of inversions are", getInvCount(arr, n))