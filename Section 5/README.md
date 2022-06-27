# Section 5 - Structure of a C++ Program <a name="section_5"></a>
## Syntax <a name="section_5_syntax"></a>
Syntax is the structure and the meaning of what you want the compiler to understand. This way it knows how to translate the source code to machine code.
To make up a programming language syntax, you need all of the following :
-	keywords
-	identifiers
-	operators
-	ponctuation

### Keywords
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

### Identifiers
Identifiers are names given by a programmer, such as :
-	variables names
-	function names
-	preprocessor directives

### Operators
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

### Ponctuation
Ponctuation is also a part of C++ as it is used to finish statements, define scopes, etc...
Some ponctuations are `;`, `"`, `{ }`, `()`,...

## Preprocessor and preprocessor directives <a name="section_5_preprocessor"></a>
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

## Comments <a name="section_5_comments"></a>
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

## The main() function <a name="section_5_main"></a>
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

## Namespaces <a name="section_5_namespaces"></a>
As programs become more and more complexe, they become a combination of *our own code*, the *C++ standard libraries and their code* and *third-party developers and their code*.

For example : picture a company X and a company Y, if they both have a function called `GetArea()` and you use both of them, you will have a possible naming conflict.
```cpp
X::GetArea();
Y::GetArea();

//std is the name for the C++ "standard" namespace
```

To avoid this kind of conflicts, **namespaces** are used. <br>
C++ allows developers to use namespaces as containers to group their code entities into a namespace scope. 

It is possible not to type `std::cout` every. single. time : 
```cpp
using namespace std; // Use the ENTIRE std namespace

int main()
{
	cout << "Hello world !";
	return 0;
}
```

Or this variant :
```cpp
using std::cout; // Use only what you need

int main()
{
	cout << "Hello world !" << std::endl; // We only called for cout in the using directive, so you need to call for std:: to use endl
	return 0;
}
```

This may not be the best solution for large programs. `using namespace std` brings in cout, cin, endl and a bunch of other identifiers contained in the std namespace. 

## Basic Input and Output (I/O) using cin and cout <a name="section_5_IO"></a>
**cout**, **cin**, **cerr** and **clog** are all objects representing streams. 

- `cout` : 
	- standard output stream
	- default to console
- `cin` :
	- standard input stream
	- default to keyboard
- `<<` :
	- insertion operator
	- output stream
- `>>` :
	- extraction operator
	- input stream
	
### `cout` and `<<`
- Insert data into the **cout** stream :
```cpp
cout << data;
```
- Can be chained :
```cpp
cout << "data1 is " << data1;
```
- Does not automatically add line breaks :
```cpp
cout << "data 1 is " << data1 << endl; //End line stream manipulator, this also flushes the stream
cout << "data 1 is " << data1 << "\n";
```

### `cin` and `>>`
- Extract data from the **cin** stream :
```cpp
cin >> data;
```
- Can be chained :
```cpp
cin >> data1 >> data2;
```
- Can fail if the entered data cannot be interpreted :
```cpp
data could have an undetermined value
```

## Section challenge <a name="section_5_challenge"></a>
### Coding exercice 1
```cpp
cout << "Hi Frank!";
```

### Coding exercice 2
```cpp
cout << "Sally has " << x << " dogs.";
```

### Coding exercice 3
```cpp
cin >> m;
cin >> d;
cin >> y;
```

## Section quizz <a name="section_5_quizz"></a>
Try #  | Result
| :---:| -------
   1   | 10 out of 10

[^1]: note that main must be written in lower case letters.
