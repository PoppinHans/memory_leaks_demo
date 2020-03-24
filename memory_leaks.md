Memory Leaks in C++, best practices to avoid them

Refer to Google C++ Style Guide (https://google.github.io/styleguide/cppguide.html) for coding style questions. Valgrind (https://valgrind.org/docs/manual/manual.html) is recommended should there be existing memory leaks.

This guide walks you through a couple of practices to avoid memory leaks in the first place.

1. Instance over dynamically allocated memory

   ​	Think twice before allocating memory dynamically. If an object only has a life cycle in the scope, then declare an instance and leave it destructed automatically when exiting the scope.

2. Properly use smart pointers

   ​	Anytime when memory is dynamically allocated, you have to think of transferring ownership. Transferring ownership means that an object passes the responsibility to ensure a dynamically allocated object is deleted to another object.

   ​	Smart pointers come handy in automating ownership bookkeeping, and they are helpful in scenarios where memory is constantly being dynamically allocated and deallocated on the fly.

3. All base classes should have a virtual destructor

   ​	Suppose a base pointer owns a dynamically allocated derived class object, and the base class has no virtual destructor. When the base pointer gets deleted, only the base destructor is then called, which leaves the resources exclusive to the derived class untouched in the heap. Thus memory leaks occur.

   ​	In cases where a hierarchy of inheritance is present, every class except the leaf classes on the hierarchical tree has to have a virtual destructor. Although it is a good practice to give every class a virtual destructor, just in case it gets inherited. 