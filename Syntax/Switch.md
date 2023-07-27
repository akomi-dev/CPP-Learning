Use the `switch` statement to select one of many code blocks to be executed.

- The `switch` expression is evaluated once
- The value of the expression is compared with the values of each `case`
- If there is a match, the associated block of code is executed
- The `break` and `default` keywords are optional
- The `break` keyword break out of the switch block
- The `default` keyword adds a fall back in the case that the expression pass does not match any cases

### Syntax

```c++
switch(expression) {  
  case x:  
    // code block
    break;  
  case y:  
    // code block
    break;  
  default:  
    // code block
}
```


### Example:

```c++
int day = 4;  
switch (day) {  
  case 6:  
    cout << "Today is Saturday";  
    break;  
  case 7:  
    cout << "Today is Sunday";  
    break;  
  default:  
    cout << "Looking forward to the Weekend";  
}  
// Outputs "Looking forward to the Weekend"
```