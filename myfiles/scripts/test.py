#!/usr/bin/env python
import os

def out(n):
        os.system("tput setab " + str(n) + "; echo -n " + ("\"%4d\"" % n))

def newline(value,d):
        if(value%d == 0):
            print("")

os.system("tput setaf 16")
for n in range(16):
    out(n)
    newline(n+1,8)  #put a newline after printing 8 colors

print("\n")

for n in range(16,256):
    out(n)
    newline(n-15,6) #put a newline after printing 6 colors
    if(n == 231):   #put a new line when grey color start or
       print("")    #you won't recognize the difference

#setting background color to black which is default on many terminals
os.system("tput setab 16")
#on some systems setting forground color has no effect on the prompt
#this is due to bash setting the foreground color as defined in .bashrc
#though background color can be changed

#setting foreground to white (if it works) else changed to default
os.system("tput setaf 15")
