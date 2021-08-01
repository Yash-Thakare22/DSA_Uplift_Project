def titleToNumber(s):
	result = 0;
	for B in range(len(s)):
		result *= 26;
		result += ord(s[B]) - ord('A') + 1;

	return result;

print(titleToNumber("CDA"));
