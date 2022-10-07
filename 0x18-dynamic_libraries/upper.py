#!/usr/bin/python3

import ctypes

b = ctypes.CDLL('./libdynamic.so')

k = b._isupper('D')
print(k)
d = b._isupper('d')
print(d)
c = b._strlen("wa rjj ")
print(c)
