## using namespace std; is seen as a bad practice

A using namespace statement allows for a more condensed view of ones code.

This is an example of a `using namespace` for the `std` library (using namespace is basically a way of variable/class omission so a certain library or class that is called in many areas of code can be called easier and have improved readability):
```c++
#include <iostream>
using namespace std;
```

### Without namespace:

[[Base Template]]
```c++
#include <iostream>

int main()
{
    std::cout << "Hello World";
    return 0;
}
```

### With namespace:

```c++
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World";
    return 0;
}
```