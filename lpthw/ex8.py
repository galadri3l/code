formatter = "%r %r %r %r"
print formatter % (1,2,3,4)
print formatter % ('one','two','three','four')
print formatter % (True,False,True,False)
print formatter % (formatter,formatter,formatter,formatter)
print formatter % (
		"I have some troubles,\n", #explain behaviour of \n
		"but they won't last.\n",
		"I'm gonna lay right down\n",
		'here in the grass.......'
		)
