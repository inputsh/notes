# Algorithms and Data Structures

This directory contains my notes from the course Algorithms and Data Structures (bos. Algoritmi i strukture podataka) for the course offered by my college. Once I pass this class, I will expand it to include more data from various sources, expanding my knowledge in algorithms (since that knowledge is _very_ important for my future career).

## Table of Content

 - [Basics of C](#basics-of-c)


## Basics of C

I would not advise you to use this as a place to learn C quickly, because the point of this file is to make a quick reference to myself of basic C commands when I need them.

If you need a reference resource, here's [C Reference Manual](http://www.acm.uiuc.edu/webmonkeys/book/c_guide/).

**Content:**

 - [Compiling and executing C code in Linux](#compiling-and-executing-c-code-in-linux)
 - [Basic program structure](#basic-program-structure)
 - [Reserved words](#reserved-words)
 - [printf](#printf)
 - [Declaring variables](#declaring-variables)
 - [Converting variables](#converting-variables)
 - [Basic math](#basic-math)
 - [Basic logic](#basic-logic)
 - [Statements](#statements)
 - [Functions](#functions)

#### Compiling and executing C code in Linux

1. Create a `.c` file containing the code.
2. Compile the code with `gcc -o NAME NAME.c`.
3. Run the code with `./NAME`.

#### Basic program structure

```c
#include <stdio.h>

int main()
{
  *code*
}

```

#### Reserved words

> auto break case char const continue default do double else enum extern float for goto if int long register return short signed sizeof static struct switch typedef union unsigned void volatile while

#### printf

```c
printf("Some variable: %X", NAME);
```

* Integer: replace `%X` with `%d`
* Float: replace `%X` with `%f` (use `%.2f` to print the float value with two decimal spaces)
* Character: replace `%X` with `%c`

#### Declaring variables

* `int a = 5`
* `float c = 4,5`
* `char znak = 'A'`

#### Converting variables

To convert integer to float, simply type `(float)NAME`. To convert float to integer, simply type `(int)NAME`. Keep in mind that 13.8 will give you 13 as a result of this conversion.

#### Basic math

* Summation `c = a + b`
* Subtraction `c = a - b`
* Multiplication `c = a * b`
* Division `c = a / b`
* Remainder of division `c = a % b`
* Increment `c = c + 1` or `c++`
* Decrement `c = c - 1` or `c--`

#### Basic logic

* Logical OR `(expressionA) || (expressionB)`
* Logical AND `(expressionA) && (expressionB)`
* Logical NOT `(!(expression))`

#### Statements

- [If](#if)
- [Switch](#switch)
- [While](#while)
- [Do](#do)
- [For](#for)
- [Goto](#goto)

You can also use `continue`, `break` and `return` inside of the statements to exit it.

##### If
```c
if(expression)
  statement;
else
  statement;)  
```

##### Switch

```c
switch (variable)
 {
  case const:
   statement;
  default:
   statements;
 }
```

##### While

```c
while(expression)
  {
    statement;
  }
```

##### Do

```c
do {
  statement;
}
while (expression);
```

##### For

```c
for(startValue; endValue; expression) {statement};
//example
for(loop=0; loop<1000; loop++) {statement};
```

##### Goto

```c
goto label;
....
label:
```

#### Functions

If the function needs to return a value:

```c
void name (int name2)
{
  statements;
}
```

If the function doesn't need to return a value:

```c
int name (int name2)
{
  statements;
}
```

`int main` is a required main function.
