### C++ uses a unique terminal/console printing format

For example: Python uses `print()`
```python
print("Hello World!")
```


While C++ uses the std library and specific syntax to point out data to be outputted.
```C++
std::cout << "Hello World!";
```


### Example:

This is a proper example of code being sent out to the console with a C++ file:
```c++
#include <iostream>

int main() {
  std::cout << "Hello World!";
  std::cout << "I am learning C++";
  return 0;
}
```


- You must note that C++ does not start a new line when having several outputs. The code must explicitly state a new line, `\n`, or an ended line `<< std::endl`.
```C++
std::cout << "Hello World!" << std::endl;
std::cout << "I am learning C++ \n";
```