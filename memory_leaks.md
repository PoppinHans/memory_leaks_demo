Memory Leaks in C++, best practices to avoid them

Refer to Google C++ Style Guide (https://google.github.io/styleguide/cppguide.html) for coding style questions. Valgrind (https://valgrind.org/docs/manual/manual.html) is recommended should there be existing memory leaks.

This guide walks you through a couple of practices to avoid memory leaks in the first place.

1. Instance over dynamically allocated memory

   ​	Think twice before allocating memory dynamically. If an object only has a life cycle in the scope, then declare an instance and leave it destructed automatically when exiting the scope.

2. Properly use smart pointers

   ​	Do not use smart pointers because they get deleted automatically, use them when ownership needs to be considered. In a rendering scenario, a node can own several sub-nodes, thus is responsible to dynamically allocate memory for the sub-nodes when data is ready, at the same time old chunks of memory are no longer accessible by the sub-nodes. Using a smart pointer makes sure the memory does not get freed as long as some elements in scene still holds it.         

3. All base classes should have a virtual destructor