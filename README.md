# Beginning C++ Programming - From Beginner to Beyond

Repository made to follow the course [**Beginning C++ Programming - From Beginner to Beyond**](https://www.udemy.com/course/beginning-c-plus-plus-programming/) from [**Frank MITROPOULOS**](https://www.linkedin.com/in/frank-j-mitropoulos/)(LinkedIn profile) on Udemy.

## Summary
1. [Naming conventions (Not in the course)](#naming_conventions)
   1. [Classes and class attributes](#naming_conventions_classes_class_attributes)
   2. [Functions and Function arguments](#naming_conventions_functions_functions_args)
   3. [Variables](#naming_conventions_variables)
   4. [Constants](#naming_conventions_constants)
   5. [File naming](#naming_conventions_file_naming)
2. [Section 4](#section_4)
   1. [IDEs functionalities](#section_4_IDE)
   2. [Compiler errors](#section_4_comp_errors)
   3. [Compiler warnings](#section_4_comp_warnings)
   4. [Linker errors](#section_4_linker_errors)
   5. [Runtime errors](#section_4_runtime_errors)
   6. [Logic errors](#section_4_logic_errors)
   7. [Section challenge](#section_4_challenge)
   8. [Section quizz](#section_4_quizz)
4. [Section 5](#section_5)
  

## Naming conventions (Not in the course) <a name="naming_conventions"></a>
### Classes and class attributes <a name="naming_conventions_classes_class_attributes"></a>
- Class names should be a noun
- Upper case letter as separator, lower case for the rest of the word
- The first character in the class name must be upper csae
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

### Functions and Function arguments <a name="naming_conventions_functions_functions_args"></a>
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
int GetValue()
int SolveEquation()
```

- The first character of function/method argument names should be lower case. All words starting after the first letter should be upper case.

Example : 
```cpp
int PerimeterRectangle(int lengthRectangle, int widthRectangle)
```

### Variables <a name="naming_conventions_variables"></a>
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

### Constants <a name="naming_conventions_constants"></a>
- The global constants should be all capital letters separated with '\_'.

Example :
```cpp
const double TWO_PI = 6.28318531;
```

### File naming <a name="naming_conventions_file_naming"></a>
- No special character is allowed in the file name except for underscore ('\_') and dash ('-')
- The file name should end with the .cc extension in the end or should end with the .cpp extension
- Do not use filenames that already exist in "/user/include" or any predefined header file name

Example :
```
helloworld.cc //Valid
hello_world.cpp //Valid
hello-world.cpp //Valid
hel-lo_world.cpp //Valid
hello*world.cpp //Not valid
iostream.cpp //Not valid
```


## Section 4 - Getting started <a name="section_4"></a>
### IDEs functionalities <a name="section_4_IDE"></a>
- Compile
  - convert .cpp source code to an object format
  - creates .o or .obj files

- Clean
  - removes all the .o/.obj files
  - sets the project to a clean state
  - useful when there are lots of file (source codes)
  - not an issue when you have only one file

- Build
  - goes through the project and looks at all the .cpp files and builds only what it needs to build

- Rebuild
  - clean + build

### Compiler errors <a name="section_4_comp_errors"></a>
- Syntax errors - something wrong with the structure
- Semantic erros - something wrong with the meaning

### Compiler warnings <a name="section_4_comp_warnings"></a>
- Only a warning because the compiler is still able to generate correct machine code

**TREAT WARNINGS AS ERRORS !!!**

### Linker errors <a name="section_4_linker_errors"></a>
- The linker is having trouble linking all the object files together to create an executable
- Usually there is a library or object file that is missing

### Runtime errors <a name="section_4_runtime_errors"></a>
- Errors that occur when the program is executing
- Some typical runtime rrors
  - Divide by zero
  - File not found
  - Out of memory
- Can cause the program to "crash"
- Exception Handling can help dealing with runtime errors

### Logic errors <a name="section_4_logic_errors"></a>
- Errors or bugs in the code that causes the program to run incorrectly
- Logic errors are mistakes made by the programmer

Example :
```cpp
//We want to check someone's age to know if he's allowed to vote 
if (age > 18)
{
  //Do the vote stuff
}
//There is a logic error here, because the legal age to vote is 18
//So we need to check if the age is superior or equal to 18 (age >= 18)
//Or superior to 17 (age > 17)
```

### Section challenge <a name="section_4_challenge"></a>
Challenge done correctly first try.
To check my solution go to this [folder](https://github.com/Cedro23/BeginningCPP/tree/master/Section%204/FirstProgram/SectionChallenge).


### Section quizz <a name="section_4_quizz"></a>
10 out of 10 - first try

## Section 5 - Structure of a C++ Program <a name="section_5"></a>
