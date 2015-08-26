# Basics of C

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
- [Arrays](#arrays)
- []

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

* Integer: replace `%X` with `%d`.
* Float: replace `%X` with `%f` (use `%.2f` to print the float value with two decimal spaces).
* Character: replace `%X` with `%c`.
* String: replace `%X` with `%s`, replace the `NAME` with the string you want to print.
* Blank spaces: `%Xs`, where `X` is the number of empty spaces.

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
for(startValue; endValue; incrementation) {statement};
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

#### Arrays

```c
#define SIZE X
//X is a number that defines number of elements in an array.
//This line should go directly after the last `#include` library.

int main()
{
  int someArray[ SIZE ] = {el1, el2, el3, ..., elX};
  //elX is the final element.
  //Array should contain the number of elements defined under the `#define` line.
}
```

You can also skip the whole `#define` line by doing this:

```c
  int someArray[ X ] = {el1, el2, el3, ..., elX};
```

#### Pointers

I really don't know how to explain them, so here's an example:

```c
#include <stdio.h>

void swap(int *c, int *d)
{
	int t = *c;
	*c = *d;
	*d = t;
}

void main()
{
	int a = 5, b = 3;
	printf("Before swap: a = %d b = %d", a, b);
	swap(&a, &b);
	printf("After swap: a = %d b = %d", a, b);
}
```
***

#### Matrices

```c
int M[2][2] = {{a,b},{c,d}};
//Creates a 2x2 matrice with values of a and b in a top row and values of c and d in the second row.
```
