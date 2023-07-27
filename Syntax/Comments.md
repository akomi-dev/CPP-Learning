
### Single Line/In-line:

Single-line comments start with two forward slashes `//`.
Any text between `//` and the end of the line is ignored by the compiler (will not be executed).

Single Line Comments:
```c++
// This is a comment
std::cout << "Hello World!";
```

In-line Comments: 
```c++
std::cout << "Hello World!"; // This is a comment
```

### Multi-Line:

Multi-line comments start with `/*` and ends with `*/`.
Any text between `/*` and `*/` will be ignored by the compiler:
```c++
/* The code below will print the words Hello World!
to the screen, and it is amazing */
std::cout << "Hello World!";
```