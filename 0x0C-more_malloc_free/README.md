malloc and free are functions used for dynamic memory allocation and deallocation, respectively. They are part of the stdlib.h library.


**********

  MALLOC:

The malloc function is used to dynamically allocate memory at runtime. It takes a single argument, which specifies the number of bytes to be allocated. The syntax is as follows:

void *malloc(size_t size);

 ____  size: The number of bytes to allocate.

The return value of malloc is a pointer to the allocated memory block, or NULL if the allocation fails. It is important to check the return value of malloc to handle potential allocation failures.


*******

  FREE:

The free function is used to deallocate dynamically allocated memory. It takes a pointer to the memory block that needs to be freed. The syntax is as follows:

void free(void *ptr);

____      ptr: A pointer to the memory block to be freed.

It is essential to only pass valid pointers to free. Passing an invalid pointer or a pointer that has already been freed can result in undefined behavior.

*********
*****************
