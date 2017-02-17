# encoding: utf-8
import sys

x=2
y=5
z=3

print "---------------"
count=1
k=1
a=1
b=z+1

while 1:
    if(count>x):
        a=count+1
        count=1
        b=y+1
        print " "
    
    for i in range(a,b):
        k = i*count
        print (i), 
        print "*", 
        print (count),
        print "=",
        print (k),
        print "  ",
    print " "
    count=count+1
    

    if(k==x*y):
        break
