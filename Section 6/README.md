# Section 6 - Variables and Constants <a name="section_6"></a>
## What is a variable ? <a name="section_6_variable"></a>
Variables are abstractions for memory locations. They allow programmers to use meaningful names and not memory addresses. They have :
-	a type - their category (integer, real, string, Person, Account...)
-	a value - their content (10, 3.14, "Ced"...)

They **must** be declared before they are used. Their value may change.

```cpp
age = 21; //Compiler error - variable not declared
```

```cpp
int age;
age = 21;
```
The later example is called static typing because the compiler is enforcing the rules when the program is compiled rather than when the program is executing.

## Declaring and initialising variables <a name="section_6_decl_init"></a>
### Declaring variables
1. 1st you tell the compiler what the type of the variable is
2. Then you tell the compiler what the name of the variable is
3. Finally, you terminate the declaration with a ";"

We can declare variables of non-C++ built-in types. One of the very powerful features of C++ is object-oriented programming, which allows us to create our own types.

For variable naming rules, refer to the this [segment](https://github.com/Cedro23/BeginningCPP/tree/master/Naming%20Convention) of this github.

Number one best practice is : **"Be consistent with your naming convention"**.

### Initialising variables
```cpp
int age; //Uninitialised => Very common souce of programming errors

int age = 21; //C-like initialisation

int age(21); //Constructor initialisation

int age {21}; //C++11 list initialisation syntax
```

## Global variables <a name="section_6_global"></a>
Variables declared between curly braces are called `local variables`.

Variables declared outside of any function are called `global variables`.
- They can be accessed from any part of the program
- Unlike local variables, global variables are automatically initialised to zero (0)
- Can pontentially be changed from any part of the program => Makes finding errors and bugs more difficult

## C++ built-in primitive types <a name="section_6_primitive_types"></a>
They are also called "Fundamental data types" because they are implemented directly by the C++ language.

Size and precision of C++'s primitive data types are largely dependent on the platform that is being worked on and the compiler being used.

### Character Types
- Used to represent single characters : 'A', 'X', '@'...
- Wider types are used to represent wide character sets

Type name   | Size/Precision
:----------	| :--------------
char        | Exactly one byte. At least 8 bits.
char16_t    | At least 16 bits.
char32_t    | At least 32 bits.
wchar_t     | Can represent the larger avaible character set.

### Integer Types
- Used to represent whole numbers
- Signed and unsigned versions

Type name   			| Size/Precision
:--------------------	| ----------------:
*signed* short int      | At least 16 bits.
*signed* int       		| At least 16 bits.
*signed* long int       | At least 32 bits.
*signed* long long int  | At least 64 bits.

Type name   			| Size/Precision
:--------------------	| ----------------:
unsigned short int      | At least 16 bits.
unsigned int       		| At least 16 bits.
unsigned long int       | At least 32 bits.
unsigned long long int  | At least 64 bits.

When using unsigned integer, the keyword `unsigned` needs to be explicited.

### Floating-point Types
- Used to represent non-integer numbers
- Represented by mantissa and exponent (scientific notation)
- Precision is the number of digits in the mantissa
- Prcision and size are compiler dependent

Type name   | Size/Typical precision				| Typical Range
:-------	| ----------------------------------:	| :------------
float       | /7 decimal digits	 					| 1.2x10<sup>-38</sup> to 3.4x10<sup>38</sup>
double      | No less than float/15 decimal digits	| 2.2x10<sup>-308</sup> to 1.8x10<sup>308</sup>
long double | No less than double/19 decimal digits	| 3.3x10<sup>-4932</sup> to 1.2x10<sup>4932</sup>

### Boolean Type
- Used to represent true and false
- Zero is false
- Non-zero is true

Type name   | Size/Typical precision				
:-------	| ----------------------------------	
bool       	| Usually 8 bits. `true` or `false` (C++ keywords).	 				

## What is the size of a variable ? <a name="section_6_sizeof"></a>
The function `sizeof` returns the number of bytes used to represent any type. It gets its information from two include files :
- climits => infos about integral types
- cfloat => infos about floating-point types

For example see the project "SizeofOperator".

## What is a constant ? <a name="section_6_constant"></a>
Like variables :
- have a name
- occupy storage
- are usually typed

:warning: Their value cannot change once declared !

Types of constants in C++ :
- Literal constants
	- most obvious kind of constant
	```cpp
	x = 12;
	y = 1.56;
	name = "Ced";
	middleInitial = 'J';
	```
- Integer Literal Constants :
	- 12   - an integer
	- 12U  - an unsigned integer
	- 12L  - a long integer
	- 12LL - a long long integer
- Character Literal Constants (escape codes)
	- \n - newline
	- \r - return
	- \t - tab
	- \b - backspace
	- \' - single quote
	- \" - double quote
	- \\\ - backslash
- Declared Constants
	- Constants declared using the `const` keyword.
	```cpp
	const double PI {3.1415926};
	const int MONTHS_IN_YEAR {12};
	
	PI = 2.5; //Compiler error
	```
- Defined Constants
	- Constants declared using the `#define` preprocessor directive
	```cpp
	#include PI 3.1415926
	```
	
:warning: DO NOT USE DEFINED CONSTANTS IN MODERN C++. JUST. DON'T.

## Section challenge <a name="section_6_challenge"></a>
### Coding exercice 4
```cpp
double hourly_wage {23.50};    
string name;
int age;

cin >> name >> age;
```

## Section quizz <a name="section_6_quizz"></a>
Try #  | Result
| :---:| -------
   1   | 9 out of 10
   2   | 10 out of 10