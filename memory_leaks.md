Memory Leaks in C++, best practises to avoid them

1. Instance over dynamically allocated memory

   ​	Think twice before allocating memory dynamically. If an object only has a life cycle of the scope, then declare an instance and let it be destructed when exiting the scope.

2. Properly use smart pointers

   

3. All base classes should have a virtual destructor