
The sizeof() operator in C++ returns the size of the passed variable or data in bytes. Similarly, it returns the total number of bytes required to store an array too. Hence, if we simply divide the size of the array by the size acquired by each element of the same, we can get the total number of elements present in the array.
```c++
sizeof(nums)/sizeof(nums[0]);
```