Arrays can be integrated with [[Loops]]

### Create Array

Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:
```c++
string cars[4];
```

We have now declared a variable that holds an array of four strings. To insert values to it, we can use an array literal - place the values in a comma-separated list, inside curly braces:
```c++
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
```

To create an array of three integers, you could write:
```c++
int myNum[3] = {10, 20, 30};
```

### Access Array

You access an array element by referring to the index number inside square brackets `[]`.
This statement accesses the value of the first element in cars:
```c++
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};  
cout << cars[0];  
// Outputs Volvo
```

### Size / Length

The sizeof() operator in C++ returns the size of the passed variable or data in bytes. Similarly, it returns the total number of bytes required to store an array too. Hence, if we simply divide the size of the array by the size acquired by each element of the same, we can get the total number of elements present in the array.
```c++
sizeof(nums)/sizeof(nums[0]);
```

### Multi-Dimensional Arrays

A multi-dimensional array is an array of arrays.

To declare a multi-dimensional array, define the variable type, specify the name of the array followed by square brackets which specify how many elements the main array has, followed by another set of square brackets which indicates how many elements the sub-arrays have:
```C++
string letters[2][4];
```

As with ordinary arrays, you can insert values with an array literal - a comma-separated list inside curly braces. In a multi-dimensional array, each element in an array literal is another array literal.
```c++
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
```
Each set of square brackets in an array declaration adds another dimension to an array. An array like the one above is said to have two dimensions.

Arrays can have any number of dimensions. The more dimensions an array has, the more complex the code becomes. The following array has three dimensions:
```c++
string letters[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};
```