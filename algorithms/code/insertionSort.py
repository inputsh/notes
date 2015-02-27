# i -> index value
# pos -> position
# tmp -> temporary value

import bisect      # used in the second function, nothing to do with the first one.

def insertionSort(alist):
   for i in range(1,len(alist)):
     tmp = alist[i]
     pos = i
     while pos>0 and alist[pos-1]>tmp:
         alist[pos]=alist[pos-1]
         pos = pos-1
     alist[pos]=tmp
     print(alist)

def insertionSort2(alist):
    for i in range(1, len(alist)):
        bisect.insort(alist, alist.pop(i), 0, i)

alist = [5,2,4,6,1,3]
insertionSort2(alist)
print(alist)
