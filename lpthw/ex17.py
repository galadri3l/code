from sys import argv
from os.path import exists

script, from_file, to_file = argv

print "Copying from %s to %s" % (from_file, to_file)

#do this in two different lines :-)

in_data = open(from_file).read()
print "The input file is %d bytes ling" % len(in_data)

print "Does the output file exists ? %r" % exists(to_file)
print"Ready, hit RETURN to continue, CTRL-C to abort."

raw_input()

#try to do it in two line
open(to_file,'w').write(in_data)

print "Alright, all done."
#no need to close file python already closes it
