class bubbleSort:
	def __init__(self, array):
		self.array = array
		self.length = len(array)

	def __str__(self):
		return " ".join([str(x)
						for x in self.array])

	def bubbleSortRecursive(self, n=None):
		if n is None:
			n = self.length

		if n == 1:
			return
			
		for i in range(n - 1):
			if self.array[i] > self.array[i + 1]:
				self.array[i], self.array[i +
				1] = self.array[i + 1], self.array[i]

		self.bubbleSortRecursive(n - 1)

def main():
	array = [64, 34, 25, 12, 22, 11, 90]
	sort = bubbleSort(array)
	
	# Sorting array
	sort.bubbleSortRecursive()
	print("Sorted array :\n", sort)


if __name__ == "__main__":
	main()
