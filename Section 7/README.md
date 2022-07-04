# Section 6 - Arrays and Vectors <a name="section_7"></a>
## Characteristics of Arrays
- Fixed in size
- Elements are all the same type
- Stored contiuously in memory
- Individual elements can be accessed by their position or index

- First element is at index 0
- Last element is at index size-1

- No checking to see if you are out of bounds

- Always initialise arrays
- Very efficient
- Iteration (looping) is often used to process arrays 

## Why do we use them ? 
Suppose you have to model 100 test scores. Modeling each one of them as its own variable with its own name can quickly get out of control. You now have to keep track of 100 variable names.

Now with an array of 100 integers, you now only have 1 name to remember !

This is a typical use case for arrays.

## Declaring and accessing array elements
### Declaring
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

### Accessing

## Section challenge <a name="section_7_challenge"></a>


## Section quizz <a name="section_7_quizz"></a>
Try #  | Result
| :---:| -------
   1   |  out of 10