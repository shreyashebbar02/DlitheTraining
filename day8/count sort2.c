#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'countingSort' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY arr as parameter.
#

def countingSort(arr):
    list1=['0']*100
    list2=[]
    for i in range(len(arr)):
        n=int(arr[i])
        list1[n]=int(list1[n])+1
    for i in range(len(list1)):
        n=int(list1[i])
        if n>0:
            for j in range(n):
                list2.append(i)
    return list2

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = countingSort(arr)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
