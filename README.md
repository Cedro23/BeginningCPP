# Beginning C++ Programming - From Beginner to Beyond

I made this repository to follow the course [**Beginning C++ Programming - From Beginner to Beyond**](https://www.udemy.com/course/beginning-c-plus-plus-programming/) from [**Frank MITROPOULOS**](https://www.linkedin.com/in/frank-j-mitropoulos/) (LinkedIn profile) on Udemy. <br>
It transcribes my experience (re)learning C++.

I am doing this to gain a new skill and to add a programming language to those I already know. I am also doing this to be able to use Unreal Engine with C++ and not only with blueprints.

I am making this as a public repository so that if I'm stuck I can easily point people towards the code I am stuck on.

*If I am asked by Mr. MITROPOULOS to pass this repository to private, I will do it.*


## Table of contents
<ol>
   <details>
      <summary><a href="#naming_conventions">Naming conventions (Not in the course)</a></summary>
      <ol>
         <li><a href="#naming_conventions">Classes and class attributes</a></li>
         <li><a href="#naming_conventions">Functions and Function arguments</a></li>
         <li><a href="#naming_conventions">Variables</a></li>
         <li><a href="#naming_conventions">Constants</a></li>
         <li><a href="#naming_conventions">File naming</a></li>
      </ol>
   </details>
   <details>
      <summary><a href="#section_4">Section 4 - Getting Started</a></summary>
      <ol>
         <li><a href="#section_4_IDE">IDEs functionalities</a></li>
         <li><a href="#section_4_comp_errors">Compiler errors</a></li>
         <li><a href="#section_4_comp_warnings">Compiler warnings</a></li>
         <li><a href="#section_4_linker_errors">Linker errors</a></li>
         <li><a href="#section_4_runtime_errors">Runtime errors</a></li>
         <li><a href="#section_4_logic_errors">Logic errors</a></li>
         <li><a href="#section_4_challenge">Section challenge</a></li>
         <li><a href="#section_4_quizz">Section quizz</a></li>
      </ol>
   </details>
   <details>
      <summary><a href="#section_5">Section 5 - Structure of a C++ Program</a></summary>
      <ol>
         <li><a href="#section_5_challenge">Section challenge</a></li>
         <li><a href="#section_5_quizz">Section quizz</a></li>
      </ol>
   </details>
   <details>
      <summary><a href="#section_6">Section 6 - Variables and Constants</a></summary>
      <ol>
         <li><a href="#section_6_challenge">Section challenge</a></li>
         <li><a href="#section_6_quizz">Section quizz</a></li>
      </ol>
   </details>
   <details>
      <summary><a href="#section_7">Section 7 - Arrays and Vectors</a></summary>
      <ol>
         <li><a href="#section_7_challenge">Section challenge</a></li>
         <li><a href="#section_7_quizz">Section quizz</a></li>
      </ol>
   </details>
   <details>
      <summary><a href="#section_8">Section 8 - Statements and Operators</a></summary>
      <ol>
         <li><a href="#section_8_challenge">Section challenge</a></li>
         <li><a href="#section_8_quizz">Section quizz</a></li>
      </ol>
   </details>
   <details>
      <summary><a href="#section_9">Section 9 - Controlling Program Flow</a></summary>
      <ol>
         <li><a href="#section_9_challenge">Section challenge</a></li>
         <li><a href="#section_9_quizz">Section quizz</a></li>
      </ol>
   </details>
   <details>
      <summary><a href="#section_10">Section 10 - Characters and Strings</a></summary>
      <ol>
         <li><a href="#section_10_challenge">Section challenge</a></li>
         <li><a href="#section_10_quizz">Section quizz</a></li>
      </ol>
   </details>
   <details>
      <summary><a href="#section_11">Section 11 - Functions</a></summary>
      <ol>
         <li><a href="#section_11_challenge">Section challenge</a></li>
         <li><a href="#section_11_quizz">Section quizz</a></li>
      </ol>
   </details>
   <details>
      <summary><a href="#section_12">Section 12 - Pointers and References</a></summary>
      <ol>
         <li><a href="#section_12_challenge">Section challenge</a></li>
         <li><a href="#section_12_quizz">Section quizz</a></li>
      </ol>
   </details>
   <details>
      <summary><a href="#section_13">Section 13 - OOP - Classes and Objects</a></summary>
      <ol>
         <li><a href="#section_13_challenge">Section challenge</a></li>
         <li><a href="#section_13_quizz">Section quizz</a></li>
      </ol>
   </details>
   <details>
      <summary><a href="#section_14">Section 14 - Operator Overloading</a></summary>
      <ol>
         <li><a href="#section_14_challenge">Section challenge</a></li>
         <li><a href="#section_14_quizz">Section quizz</a></li>
      </ol>
   </details>
   <details>
      <summary><a href="#section_15">Section 15 - Inheritance</a></summary>
      <ol>
         <li><a href="#section_15_challenge">Section challenge</a></li>
         <li><a href="#section_15_quizz">Section quizz</a></li>
      </ol>
   </details>
   <details>
      <summary><a href="#section_16">Section 16 - Polymorphism</a></summary>
      <ol>
         <li><a href="#section_16_challenge">Section challenge</a></li>
         <li><a href="#section_16_quizz">Section quizz</a></li>
      </ol>
   </details>
   <details>
      <summary><a href="#section_17">Section 17 - Smart Pointers</a></summary>
      <ol>
         <li><a href="#section_17_challenge">Section challenge</a></li>
         <li><a href="#section_17_quizz">Section quizz</a></li>
      </ol>
   </details>
   <details>
      <summary><a href="#section_18">Section 18 - Exception Handling</a></summary>
      <ol>
         <li><a href="#section_18_challenge">Section challenge</a></li>
         <li><a href="#section_18_quizz">Section quizz</a></li>
      </ol>
   </details>
   <details>
      <summary><a href="#section_19">Section 19 - I/O and Streams</a></summary>
      <ol>
         <li><a href="#section_19_challenge">Section challenge</a></li>
         <li><a href="#section_19_quizz">Section quizz</a></li>
      </ol>
   </details>
   <details>
      <summary><a href="#section_20">Section 20 - The Standard Template Library (STL)</a></summary>
      <ol>
         <li><a href="#section_20_challenge">Section challenge</a></li>
         <li><a href="#section_20_quizz">Section quizz</a></li>
      </ol>
   </details>
   <details>
      <summary><a href="#section_21">Section 21 - Lambda Expressions</a></summary>
      <ol>
         <li><a href="#section_21_challenge">Section challenge</a></li>
         <li><a href="#section_21_quizz">Section quizz</a></li>
      </ol>
   </details>
</ol>

## Naming conventions (Not in the course) <a name="naming_conventions"></a>
### Classes and class attributes <a name="naming_conventions_classes_class_attributes"></a>
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
int GetValue();
int SolveEquation();
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


## Section 4 - Getting Started <a name="section_4"></a>
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

<details>
	<summary>Non exaustive list of IDEs</summary>
	<ul>
		<li>CodeLite - Free, cross-platform, fast, system requirements are minimal</li>
		<li>Code::Blocks - Good cross-platform IDE, buggy on Mac</li>
		<li>NetBeans - Oracle IDE made for Java, great cross-platform but requires a Java JRE and the memory requirements can be pretty significant</li>
		<li>Eclipse - Multiple languages support, good cross-platform, high memory management</li>
		<li>CLion - Made by JetBrain, awesome IDE, not free, exists in student version</li>
		<li>Dev-C++ - C++ Windows only environment, small and fast</li>
		<li>KDevelop - Cross-platform, multiple-language IDE. No Mac binary, have to build from the source</li>
		<li>Visual Studio - Windows only for C++ version</li>
		<li>XCode - Mac only IDE</li>
	</ul>
</details>

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
Try #  | Result
| :---:| -------
   1   | 10 out of 10

## Section 5 - Structure of a C++ Program <a name="section_5"></a>

### Section challenge <a name="section_5_challenge"></a>

### Section quizz <a name="section_5_quizz"></a>

## Section 6 - Variables and Constants <a name="section_6"></a>

### Section challenge <a name="section_6_challenge"></a>

### Section quizz <a name="section_6_quizz"></a>

## Section 7 - Arrays and Vectors <a name="section_7"></a>

### Section challenge <a name="section_7_challenge"></a>

### Section quizz <a name="section_7_quizz"></a>

## Section 8 - Statements and Operators <a name="section_8"></a>

### Section challenge <a name="section_8_challenge"></a>

### Section quizz <a name="section_8_quizz"></a>

## Section 9 - Controlling Program Flow <a name="section_9"></a>

### Section challenge <a name="section_9_challenge"></a>

### Section quizz <a name="section_9_quizz"></a>

## Section 10 - Characters and Strings <a name="section_10"></a>

### Section challenge <a name="section_10_challenge"></a>

### Section quizz <a name="section_10_quizz"></a>

## Section 11 - Functions <a name="section_11"></a>

### Section challenge <a name="section_11_challenge"></a>

### Section quizz <a name="section_11_quizz"></a>

## Section 12 - Pointers and References <a name="section_12"></a>

### Section challenge <a name="section_12_challenge"></a>

### Section quizz <a name="section_12_quizz"></a>

## Section 13 - OOP - Classes and Objects <a name="section_13"></a>

### Section challenge <a name="section_13_challenge"></a>

### Section quizz <a name="section_13_quizz"></a>

## Section 14 - Operator Overloading <a name="section_14"></a>

### Section challenge <a name="section_14_challenge"></a>

### Section quizz <a name="section_14_quizz"></a>

## Section 15 - Inheritance <a name="section_15"></a>

### Section challenge <a name="section_15_challenge"></a>

### Section quizz <a name="section_15_quizz"></a>

## Section 16 - Polymorphism <a name="section_16"></a>

### Section challenge <a name="section_16_challenge"></a>

### Section quizz <a name="section_16_quizz"></a>

## Section 17 - Smart Pointers <a name="section_17"></a>

### Section challenge <a name="section_17_challenge"></a>

### Section quizz <a name="section_17_quizz"></a>

## Section 18 - Exception Handling <a name="section_18"></a>

### Section challenge <a name="section_18_challenge"></a>

### Section quizz <a name="section_18_quizz"></a>

## Section 19 - I/O and Streams <a name="section_19"></a>

### Section challenge <a name="section_19_challenge"></a>

### Section quizz <a name="section_19_quizz"></a>

## Section 20 - The Standard Template Library (STL) <a name="section_20"></a>

### Section challenge <a name="section_20_challenge"></a>

### Section quizz <a name="section_20_quizz"></a>

## Section 21 - Lambda Expressions <a name="section_21"></a>

### Section challenge <a name="section_21_challenge"></a>

### Section quizz <a name="section_21_quizz"></a>
