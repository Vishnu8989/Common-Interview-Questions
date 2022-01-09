from math import *
import random
heights = [random.randint(8, 50) for i in range(random.randint(1, 10))]
print(heights)

j = 10
f = 1

count2 = 0


def find_jump(i):
    global count2
    count2 += 1
    tot = 0
    if i <= j:
        return 1
    else:
        tot += 1
        i = i-j
        if i != 0:
            i = i+f
            tot += find_jump(i)
    return tot


def find_jump2(i):
    if i < j:
        return 1
    i = i-f
    tot = i / (j-f)
    tot = ceil(tot)
    return tot


count1 = 0
count3 = 0
for i in heights:
    count1 += find_jump(i)
    count3 += find_jump2(i)
    print("Count for {} : {}".format(i, find_jump(i)))
print("Total Jump = ", count1)
print("Total Jump = ", count3)
print("Total Loops = ", count2)
