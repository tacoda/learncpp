# Learn C++

## Getting Started

Compile

```sh
g++ -o HelloWorld HelloWorld.cpp
```

Run binary

```sh
./HelloWorld
```

[Common Problems](https://www.learncpp.com/cpp-tutorial/a-few-common-cpp-problems/)

Add warning and error levels

```sh
g++ -o HelloWorld HelloWorld.cpp -Wall -Weffc++ -Wextra -Wsign-conversion
```

Language Standards

```sh
g++ -o Test17 test17.cpp --std=c++17
g++ -o Test20 test20.cpp --std=c++20
```

## C++ Basics

### Statements

**Dissecting Hello World**

https://github.com/tacoda/learncpp/blob/959289b44e858103e708ec84e55d19ae8bc86c32/HelloWorld.cpp#L1-L7

Line 1 is a special type of line called a preprocessor directive. This preprocessor directive indicates that we would like to use the contents of the iostream library, which is the part of the C++ standard library that allows us to read and write text from/to the console. We need this line in order to use std::cout on line 5. Excluding this line would result in a compile error on line 5, as the compiler wouldn’t otherwise know what std::cout is.

Line 2 is blank, and is ignored by the compiler. This line exists only to help make the program more readable to humans (by separating the #include preprocessor directive and the subsequent parts of the program).

Line 3 tells the compiler that we’re going to write (define) a function called main. As you learned above, every C++ program must have a main function or it will fail to link.

Lines 4 and 7 tell the compiler which lines are part of the main function. Everything between the opening curly brace on line 4 and the closing curly brace on line 7 is considered part of the main function. This is called the function body.

Line 5 is the first statement within function main, and is the first statement that will execute when we run our program. std::cout (which stands for “character output”) and the << operator allow us to send letters or numbers to the console to be output. In this case, we’re sending it the text “Hello world!”, which will be output to the console. This statement creates the visible output of the program.

Line 6 is a return statement. When an executable program finishes running, the program sends a value back to the operating system in order to indicate whether it ran successfully or not. This particular return statement returns the value of 0 to the operating system, which means “everything went okay!”. This is the last statement in the program that executes.

### Comments

**Warning**

Don't use multi-line comments inside other multi-line comments. Wrapping single-line comments inside a multi-line comment is okay.

**Best practice**

Comment your code liberally, and write your comments as if speaking to someone who has no idea what the code does. Don’t assume you'll remember why you made specific choices.

### Object and Variables

**Key insight**

Programs are collections of instructions that manipulate data to produce a desired result.

**Author’s note**

In general programming, the term object typically refers to an unnamed object in memory, a variable, or a function. In C++, the term object has a narrower definition that excludes functions.

**Best practice**

Although the language allows you to do so, avoid defining multiple variables of the same type in a single statement. Instead, define each variable in a separate statement on its own line (and then use a single-line comment to document what it is used for).

### Variable Assignment and Initialization

**Warning**

One of the most common mistakes that new programmers make is to confuse the assignment operator (`=`) with the equality operator (`==`). Assignment (`=`) is used to assign a value to a variable. Equality (`==`) is used to test whether two operands are equal in value.

**Best practice**

Favor initialization using braces whenever possible.

**Best practice**

Initialize your variables upon creation.

### IoStream

**Best practice**

Output a newline whenever a line of output is complete.

**Key insight**

Buffered systems are often used in cases where processing a few large batches of data is more efficient than processing many smaller batches of data. Buffering maximizes overall throughput, at the cost of increasing response time.

**Best practice**

Prefer ‘\n’ over std::endl when outputting text to the console.

**Warning**

‘\n’ uses a backslash (as do all special characters in C++), not a forward slash. Using a forward slash (e.g. ‘/n’) instead may result in unexpected behavior.

**Best practice**

There’s some debate over whether it’s necessary to initialize a variable immediately before you give it a user provided value via another source (e.g. std::cin), since the user-provided value will just overwrite the initialization value. In line with our previous recommendation that variables should always be initialized, best practice is to initialize the variable first.

### Uninitialized Variables and Undefined Behavior

## C++ Basics: Functions and Files

## Debugging C++ Programs

## Fundamental Data Types

## Operators

## Bit Manipulation

## Scope, Duration, and Linkage

## Control Flow and Error Handling

## Type Conversion and Function Overloading

## Compound Types: References and Pointers

## Compound Types: Enums and Structs

## Arrays, Strings, and Dynamic Allocation

## Functions

## Basic Object-oriented Programming

## Operator overloading

## Object Relationships

## Inheritance

## Virtual Functions

## Templates and Classes

## Exceptions

## Move Semantics and Smart Pointers

## The Standard Template Library

## std::string

## Input and Output (I/O)

## Miscellaneous Subjects
