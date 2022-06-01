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
      <summary><a href="https://github.com/Cedro23/BeginningCPP/tree/master/Section%204/FirstProgram">Section 4 - Getting Started</a></summary>
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
         <li><a href="#section_5_syntax">Syntax</a></li>
		 <li><a href="#section_5_comments">Comments</a></li>
         <li><a href="#section_5_main">The main() function</a></li>
		 <li><a href="#section_5_namespaces">Namespaces</a></li>
		 <li><a href="#section_5_preprocessor">Preprocessor and preprocessor directives</a></li>
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

## Section 5 - Structure of a C++ Program <a name="section_5"></a>
### Syntax <a name="section_5_syntax"></a>
Syntax is the structure and the meaning of what you want the compiler to understand. This way it knows how to translate the source code to machine code.
To make up a programming language syntax, you need all of the following :
-	keywords
-	identifiers
-	operators
-	ponctuation

#### Keywords
Most languages have keywords. They are part of the vocabulary of a programming language. In most languages, the keywords are also reserved. <br>
It means we (as programmers) cannot redefine their meaning and cannot use them in a way they were not intended. <br>
You can see all C++ keywords [here](https://en.cppreference.com/w/cpp/keyword).

Language  | # of keywords
-------	| -------
   C++   | ~90
   Java  | ~50
   C     | 32
   Python | 33

As you can see, C++ has a lot of keywords compared to other programming languages.

The more keywords a programming language has, the more complex its grammar is. <br>
There are many keywords in C++ that are rarely used. <br>
There is no need to memorise them as you will learn and memorise them the more you use them.

#### Identifiers
Identifiers are names given by a programmer, such as :
-	variables names
-	function names
-	preprocessor directives

#### Operators
As in other programming languages, there are operators in C++.<br>
Some basic ones :
-	`+` : add
-	`-` : substract
-	`*` : multiply
-	`/` : divide

And some non-standards one : 
-	`<<` : Stream insertion operator - Inserts whatever is on the right-hand side of it into that stream
-	`>>` : Stream extraction operator - Takes something from a stream and store it into a variable
-	`::` : Scope resolution operator (c.f: Section 9)

#### Ponctuation
Ponctuation is also a part of C++ as it is used to finish statements, define scopes, etc...
Some ponctuations are `;`, `"`, `{ }`, `()`,...

### Preprocessor and preprocessor directives <a name="section_5_preprocessor"></a>
The preprocessor is a program that processes the source code before the compiler sees it. It works in the following way :
1.	Strips all the comments from the source file and replaces it with a single space
1.	Looks for preprocessor directives and executes them

Preprocessor directives are lines in the source code that begin with the pound, or hashtag, symbol `#`.

`#include` is the most used preprocessor directive. <br>
When the preprocessor sees this line, it replaces it with the file it's referring to. <br>
Then it recursively processes that file as well.

Preprocessor directives are commonly used to conditionaly compile code (i.e: compile specific windows/mac library based on the OS).


⚠️ **C++ preprocessor does not understand C++ !!!** <br>
The compiler is the program that does understand C++.

### Comments <a name="section_5_comments"></a>
Comments apply to basicaly every programming languages. They are programmer readable explanations in the source code (anything that adds meaning to what the program is doing).

:warning: **Comments never make it to the compiler**

C++ has two styles of comments :
-	Single line comments => everything after `//` untill the end of the line will be ignored
-	Multi-line comments => everything between `/*` and `*/` will be ignored

The code should be self-documenting. That does not mean we don't write comments.

Some dos and don'ts :
```diff
+	If you modify your code, make sure you modify the comment associated to it if neessary
+	Write comments that make sense
+	Explain the more complicated code
+	Keep the style of comment consistent

-	Don't comment the obvious
-	Good commenting does not justify bad code
-	Do not use comments as version control (use Subversion or Git)
```

Multi-line comments are usually seen at the top of files. They include informations like the author, the date it was created, copyrights licenses, etc...

### The main() function <a name="section_5_main"></a>
:warning: **Every C++ program must have exactly ONE main function somewhere.** <br>
A C++ program may consist of hundreds of files. Only one of those must contain the main[^1] function.

When a C++ program executes, the main function is called by the operating system and the code between the curly braces executes.<br>
If it returns 0, the program executed successfuly. Else, the operating system can check the returned number to know what went wrong.

There are 2 versions of main, both valid as per the C++ specification :
-	version with no arguments 
```cpp
int main()
{
	//Code
	return 0;
}
```
-	version with expected information from the operating system
```cpp
int main(int agrc, char *argv[])
{
	//Code
	return 0;
}
```

The second one is very common for command line applications.

:warning: **main must always return an integer**<br>

[^1]: note that main must be written in lower case letters.

### Namespaces <a name="section_5_namespaces"></a>

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
