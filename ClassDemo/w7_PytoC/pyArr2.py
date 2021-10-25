import numpy as np

# define an array
A = np.array([1,2,3,4,5])
print(A)

B = np.copy(A)
print(B)

B[0] = 2
print(A)
