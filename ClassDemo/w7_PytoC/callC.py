from ctypes import c_double, cdll

# import the C library
clib=cdll.LoadLibrary("libfun.so")

# define the data type of the function arguments
clib.multiply.argtypes=[c_double,c_double]

# define the return data type of the function
clib.multiply.restype=c_double

a=10.0
b=20.0

result=clib.multiply(a,b)

print(result)
