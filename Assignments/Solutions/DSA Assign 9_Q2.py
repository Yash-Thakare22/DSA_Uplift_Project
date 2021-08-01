def countNegative(M, n, m):
	count = 0

	for i in range(n):
		for j in range(m):

			if M[i][j] < 0:
				count += 1

			else:
			    break
	return count

M = [
	[-3, -2, -1, 1],
	[-2, 2, 3, 4],
	[ 4, 5, 7, 8]
	]
print(countNegative(M, 3, 4))
