### Declare Variables

To create a variable, specify the type and assign it a value:
```c++
type variableName = value;
```

Where _type_ is one of C++ types (such as `int`), and _variableName_ is the name of the variable (such as **x** or **myName**). The **equal sign** is used to assign values to the variable.

The general rules for naming variables are:

- Names can contain letters, digits and underscores
- Names must begin with a letter or an underscore `(_)`
- Names are case sensitive (`myVar` and `myvar` are different variables)
- Names cannot contain whitespaces or special characters like !, #, %, etc.
- Reserved words (like C++ keywords, such as `int`) cannot be used as names

### Data Types

Some common data types are:
```c++
int myNum = 5;               // Integer (whole number without decimals)  
double myFloatNum = 5.99;    // Floating point number (with decimals)  
char myLetter = 'D';         // Character  
string myText = "Hello";     // String (text)  
bool myBoolean = true;       // Boolean (true or false)
```

Variables can also be declared as constants, this data will not be changeable:
```c++
const int myNum = 15;  // myNum will always be 15
myNum = 10;  // error: assignment of read-only variable 'myNum'
```