# Section 4 - Getting Started <a name="section_4"></a>
## IDEs functionalities <a name="section_4_IDE"></a>
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
	<summary><strong>Non exaustive list of IDEs</strong></summary>
	<ul>
		<li><strong>CodeLite</strong> - Free, cross-platform, fast, system requirements are minimal</li>
		<li><strong>Code::Blocks</strong> - Good cross-platform IDE, buggy on Mac</li>
		<li><strong>NetBeans</strong> - Oracle IDE made for Java, great cross-platform but requires a Java JRE and the memory requirements can be pretty significant</li>
		<li><strong>Eclipse</strong> - Multiple languages support, good cross-platform, high memory management</li>
		<li><strong>CLion</strong> - Made by JetBrain, awesome IDE, not free, exists in student version</li>
		<li><strong>Dev-C++</strong> - C++ Windows only environment, small and fast</li>
		<li><strong>KDevelop</strong> - Cross-platform, multiple-language IDE. No Mac binary, have to build from the source</li>
		<li><strong>Visual Studio</strong> - Windows only for C++ version</li>
		<li><strong>XCode</strong> - Mac only IDE</li>
	</ul>
</details>

## Compiler errors <a name="section_4_comp_errors"></a>
- Syntax errors - something wrong with the structure
- Semantic erros - something wrong with the meaning

### Compiler warnings <a name="section_4_comp_warnings"></a>
- Only a warning because the compiler is still able to generate correct machine code

⚠️ **TREAT WARNINGS AS ERRORS !!!**

## Linker errors <a name="section_4_linker_errors"></a>
- The linker is having trouble linking all the object files together to create an executable
- Usually there is a library or object file that is missing

## Runtime errors <a name="section_4_runtime_errors"></a>
- Errors that occur when the program is executing
- Some typical runtime rrors
  - Divide by zero
  - File not found
  - Out of memory
- Can cause the program to "crash"
- Exception Handling can help dealing with runtime errors

## Logic errors <a name="section_4_logic_errors"></a>
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

## Section challenge <a name="section_4_challenge"></a>
Challenge done correctly first try.
To check my solution go to this [folder](https://github.com/Cedro23/BeginningCPP/tree/master/Section%204/SectionChallenge) and check out the `SectionChallenge.cpp` file.


## Section quizz <a name="section_4_quizz"></a>
Try #  | Result
| :---:| -------
   1   | 10 out of 10
