def add(a,b):
	print "ADDING %.2f + %.2f" % (a,b)
	return a + b

def subtract(a,b):
	print "SUBTRACTING %f - %f" % (a,b)
	return a - b

def multiply(a,b):
	print "MULTIPLYING %f * %f" % (a,b)
	return a * b

def divide(a,b):
	print "DIVIDING %f / %f" % (a,b)
	return a / b

print "Let's so some math with just function!"
print "a = ",;a = float(raw_input());b = float(raw_input("b = "))
age = add(a,b);
height = subtract(a,b)
weight = multiply(a,b)
iq = divide(a,b)

print "Age: %f, Height = %f, Weight = %f, IQ = %f" %(age,height,weight,iq)

#a puzzle
print "here's a puzzle"

what = add(age,subtract(height,multiply(weight,divide(iq,2))))

print "That becomes: ",what,"can you do it by hand?"
