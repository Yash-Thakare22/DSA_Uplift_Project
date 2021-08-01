def checkPattern(string, pattern):

	l = len(pattern)


	if len(string) < l:
		return False

	for i in range(l - 1):


		x = pattern[i]
		y = pattern[i + 1]

		# find index of last occurrence of
		# character x in the input string
		last = string.rindex(x)

		first = string.index(y)

		if last == -1 or first == -1 or last > first:
			return False

	return True

if __name__ == "__main__":
	string = "engineers rock"
	pattern = "gsr"
	print(checkPattern(string, pattern))