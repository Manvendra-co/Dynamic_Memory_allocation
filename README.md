# Dynamic_Memory_allocation
Dynamic Memory Allocation can be defined as a procedure in which the size of a data structure (like Array) is changed during the runtime.
C provides some functions to achieve these tasks. There are 4 library functions provided by C defined under <stdlib.h> header file to facilitate dynamic memory allocation in C programming. They are: 

malloc()

calloc()

free()

realloc()

# C malloc() method
The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially. 
Syntax of malloc() Function:

ptr = (cast_type *) malloc (byte_size);

Here,

ptr is a pointer of cast_type.

The C malloc() function returns a pointer to the allocated memory of byte_size.

Example of malloc():

Example: ptr = (int *) malloc (50)
# C calloc() method
“calloc” or “contiguous allocation” method in C is used to dynamically allocate the specified number of blocks of memory of the specified type. it is very much similar to malloc() but has two different points and these are:

It initializes each block with a default value ‘0’.

It has two parameters or arguments as compare to malloc().

Syntax of calloc() Function:

ptr = (cast_type *) calloc (n, size);

The above statement is used to allocate n memory blocks of the same size.

After the memory space is allocated, then all the bytes are initialized to zero.

The pointer which is currently at the first byte of the allocated memory space is returned.

Whenever there is an error allocating memory space such as the shortage of memory, then a null pointer is returned.


# C realloc() method
“realloc” or “re-allocation” method in C is used to dynamically change the memory allocation of a previously allocated memory. In other words, if the memory previously allocated with the help of malloc or calloc is insufficient, realloc can be used to dynamically re-allocate memory. re-allocation of memory maintains the already present value and new blocks will be initialized with the default garbage value.

Syntax of realloc() Function:

ptr = realloc (ptr,newsize);

The above statement allocates a new memory space with a specified size in the variable newsize. After executing the function, the pointer will be returned to the first byte of the memory block. The new size can be larger or smaller than the previous memory. We cannot be sure that if the newly allocated block will point to the same location as that of the previous memory block. This function will copy all the previous data in the new region. It makes sure that data will remain safe.

# Output
![image](https://user-images.githubusercontent.com/76811184/234397568-a948019f-4f65-42c8-8f1f-89a9a3eb6dec.png)
