### While Loops

The `while` loop loops through a block of code as long as a specified condition is `true`:
```c++
while (condition) {  
  // code block to be executed  
}
```

In the example below, the code in the loop will run, over and over again, as long as a variable (`i`) is less than 5:
```c++
int i = 0;  
while (i < 5) {  
  cout << i << "\n";  
  i++;  
}
```

### do/while 

A `do/while` acts in similar ways a a `while loop` with different syntax:
```c++
do {  
  // code block to be executed
} while (condition);
```

Example:
```c++
int i = 0;  
do {  
  cout << i << "\n";  
  i++;  
}  
while (i < 5);
```

### For Loops

When you know exactly how many times you want to loop through a block of code, use the `for` loop instead of a `while` loop:
```c++
for (statement 1; statement 2; statement 3) {  
  // code block to be executed
}
```

- **Statement 1** is executed (one time) before the execution of the code block.
- **Statement 2** defines the condition for executing the code block.
- **Statement 3** is executed (every time) after the code block has been executed.

The example below will print the numbers 0 to 4:
```c++
for (int i = 0; i < 5; i++) {  
  cout << i << "\n";  
}
```

### For Each

There is also a "**for-each** loop" (introduced in C++ version 11 (2011)), which is used exclusively to loop through elements in an array:

```c++
for (type variableName : arrayName) {  
  // code block to be executed  
}
```

Example: 
```c++
int myNumbers[5] = {10, 20, 30, 40, 50};  
for (int i : myNumbers) {  
  cout << i << "\n";  
}
```