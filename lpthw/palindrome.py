def reverse(n):
	rev = 0
	while n > 0:
		m = n % 10
		n /= 10
		rev = 10*rev + m
	return rev
def palindrome(n):
	return n == reverse(n)

n = int(raw_input("input number: "))
print "reverse of n:",reverse(n)
print "%d is palindrome:" %n,palindrome(n)
