# Naming conventions <a name="naming_conventions"></a>
## Classes and class attributes <a name="naming_conventions_classes_class_attributes"></a>
- Class names should be a noun
- Upper case letter as separator, lower case for the rest of the word
- The first character in the class name must be upper case
- No underscore ('\_') are permitted in the class name

Example : 
```cpp
class PerimeterRectangle

class FingerprintScanner
```

- The private attribute in class should be prepended with the character 'm'
- After prepending 'm', the same rules will be followed for the name like those for the class name
- Character 'm' also precedes other name modifiers. For example, 'p' for pointers

Example :
```cpp
class PerimeterRectangle
{
  public:
  int perimeter;
  private:
  int mLenght;
  int mWidth;
}
```

## Functions and Function arguments <a name="naming_conventions_functions_functions_args"></a>
- Each method/function should begin with a verb : 
  - Suffixes are sometimes useful. For example,
    - Count - the current count of the counter
    - Key - the key value
  - Prefixes are sometimes useful. For example,
    - get - get value
    - set - set value
- The same name convention is used as that for the class name

Example : 
```cpp
int GetValue();
int SolveEquation();
```

- The first character of function/method argument names should be lower case. All words starting after the first letter should be upper case.

Example : 
```cpp
int PerimeterRectangle(int lengthRectangle, int widthRectangle)
```

## Variables <a name="naming_conventions_variables"></a>
- The variable name should begin with an alphabet
- Digits may be used but only after the alphabet
- No special symbols can be used in variable names except for the underscore ('\_')
- No key words can be used for variable names
- Camel case is accepted and valid

Example :
```cpp
int total_cost; //Valid
int totalCost; //Valid
int length; //Valid
```

***Pointer variables*** should be prepended with 'p' and place the asterisk '\*' close to the variable name instead of pointer type.

Example :
```cpp
int *pName; //Do this
int* pName; //Not this
int *pAge, address; // Here, only pAge is a pointer variable
```

***Reference variables*** should be prepended with 'r'.

***Static variables*** should be prepended with 's'.

Example :
```cpp
static int sCount;
```

## Constants <a name="naming_conventions_constants"></a>
- The global constants should be all capital letters separated with '\_'.

Example :
```cpp
const double TWO_PI = 6.28318531;
```

## File naming <a name="naming_conventions_file_naming"></a>
- No special character is allowed in the file name except for underscore ('\_') and dash ('-')
- The file name should end with the .cc extension in the end or should end with the .cpp extension
- Do not use filenames that already exist in "/user/include" or any predefined header file name

Example :
```diff
+ helloworld.cc //Valid
+ hello_world.cpp //Valid
+ hello-world.cpp //Valid
+ hel-lo_world.cpp //Valid
- hello*world.cpp //Not valid
- iostream.cpp //Not valid
```
