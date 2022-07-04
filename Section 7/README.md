# Section 7 - Arrays and Vectors <a name="section_7"></a>
## Arrays
### Characteristics
- Fixed in size
- Elements are all the same type
- Stored contiguously in memory
- Individual elements can be accessed by their position or index

- First element is at index 0
- Last element is at index size-1

- No checking to see if you are out of bounds

- Always initialise arrays
- Very efficient
- Iteration (looping) is often used to process arrays 

### How do they work ? 

- The name of the array represents the location of the first element in the array (at index 0)
- The [index] represents the offset from the beginning of the array
- C++ simply performs a calculation to find the correct element
- Remember - no bounds checking !

### Why do we use them ? 
Suppose you have to model 100 test scores. Modeling each one of them as its own variable with its own name can quickly get out of control. You now have to keep track of 100 variable names.

Now with an array of 100 integers, you now only have 1 name to remember !

This is a typical use case for arrays.

### Array syntaxes
#### Declaring an array
`Element_Type array_name[constant number of elements];`

```cpp
int testScores[5];
int highScorePerLevel[100];

const int DAYS_IN_YEAR{365};
double hiTemperatures[DAYS_IN_YEAR];
```

Best practice is to always initialise arrays when they are declared.

```cpp
int testScores[5]{100, 95, 99, 87, 88};
int highScorePerLevel[10]{3,5}; //Initialises the first element to 3 and the second to 5, the rest is initialised to 0

const int DAYS_IN_YEAR{365};
double hiTemperatures[DAYS_IN_YEAR]{0}; //All elements are initialised to 0, also works with empty curly braces {}

int anotherArray[]{1, 2, 3, 4, 5}; //Size is automatically calculated
```

#### Accessing an element
`array_name[element_index]`

```cpp
int testScores[5]{100, 95, 99, 87, 88};
cout << "Third score at index 2: " << testScores[2];
```

#### Changing an element's content
```cpp
int testScores[5]{100, 95, 99, 87, 88};
cin >> testScores[1];
testScores[0] = 90; //Assignement statement
```

### Multidimensional arrays
#### Declaring
`Element_Type array_name[1st dimension] [2nd dimension];`

```cpp
int movieRatings[3][4];
```

There is no real limit on the number of dimensions. However, be aware that some compiler do place limits on this. Keep in mind that limits are quite high, so it is unlikel that you will ever reach them.

#### Initialising
```cpp
int movieRatings[3][4]
{
	{0, 4, 3, 5},
	{2, 3, 3, 5},
	{1, 4, 4, 5}
};
```

## Vectors
### What are they ? 
- Container in the C++ Standard Template Library
- An array that can grow and shrink in size at execution time
- Provides similar semantics and syntax as arrays

### Characteristics
- Dynamic size
- Elements are all of the same type
- Stored contiguously in memory
- Individual elements can be accessed by their position or index

- First element is at index 0
- Last element is at index size-1

- Using [] to access a vector element will not provide bounds checking
- Vectors provide many useful functions that do bounds check (`sort`, `reverse`, `find`...)
- Elements initialised to zero, unless specified otherwise
- Very efficient
- Iteration (looping) is often used to process vectors

### Why do we use them ?
- Suppose we want to store the test scores for a school
- We have no way of knowing how many students will register next year
- Options 
	- Pick a size that you are not likely to exceed and use static arrays
	- Use a dynamic array such as a vector !

### Vector syntaxes
#### Declaring
```cpp
#include <vector>
using namespace std;

vector<char> vowels;
vector<int> testScores;
```

```cpp
vector<char> vowels(5); //5 characters in the vector
vector<int> testScores(10); //Constructor initialisation syntax => provides information inside parentheses
							//These 10 integers will automatically be set to 0, unlike arrays
```

#### Initialising
```cpp
vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
vector<int> testScores{100, 98, 89, 85, 93};
vector<double> hiTemps(365, 80.0); //Declaring a vector of 365 doubles, and initialising all these doubles to 80.0
```

You can declare a vector to be a copy of an array or a copy of another vector.

#### Accessing
Using the array syntax :
`vector_name[element_index]`

```cpp
vector<int> testScores{100, 98, 89, 85, 93};
cout << "Fourth score at index 3: " << testScores[3]; //No bounds checking
```

Using the `at()` method (vector syntax) : 
`vector_name.at(element_index)`

```cpp
vector<int> testScores{100, 98, 89, 85, 93};
cout << "Fourth score at index 3: " << testScores.at(3); //Bounds checking
```

#### Changing the contents of vector elements
Using the `at()` method :

```cpp
vector<int> testScores{100, 95, 99, 87, 88};
testScores.at(0) = 90; //Assignement statement
```

#### Adding new elements
`vector_name.push_back(element)`

```cpp
vector<int> testScores{100, 95, 99}; //Size is 3
testScores.push_back(80); //100, 95, 99, 80
testScores.push_back(90); //100, 95, 99, 80, 90
```

Vectors will automatically allocate the required space !

### Out of bounds 
What happens if you are out of bounds ?
- Arrays never do bounds checking
- Many vector methods provide bounds checking
- An exception is thrown and an error message is generated

## Section challenge <a name="section_7_challenge"></a>
See the folder named "SectionChallenge".

## Section quizz <a name="section_7_quizz"></a>
Try #  | Result
| :---:| -------
   1   | 10 out of 10