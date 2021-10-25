from ctypes import c_int, c_double, cdll
import numpy as np

clib=cdll.LoadLibrary("libfun.so")

clib.arraySum.argtypes=[np.ctypeslib.ndpointer(dtype=np.float64),c_int]

clib.arraySum.restype=c_double

A=np.array([[1.,2.,3.],[4.,5.,6.]])

result=clib.arraySum(A,6)

print(result)
