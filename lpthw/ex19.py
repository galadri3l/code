def cheese_and_crackers(cheese_count, boxes_of_crackers):
	print "You have %d cheeses!" % cheese_count
	print "You have %d boxes of crackers!" % boxes_of_crackers
	print "Man that's enough for a party!"
	print "Get a blanket.\n"

print "We can just give the function numbers directly:"
cheese_and_crackers(20,30)

print "OR, we can use variables from out script:"
amount_of_cheese = int(raw_input("cheese amount: "))
amount_of_crackers = int(raw_input("crackers amount: "))

cheese_and_crackers(amount_of_cheese,amount_of_crackers)

print "We can even do math inside: "
cheese_and_crackers(50+67,50+90)

print "And we can combine math and variables: "
cheese_and_crackers(amount_of_cheese + 5,amount_of_crackers + 7)
