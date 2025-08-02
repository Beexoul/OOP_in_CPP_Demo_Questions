# Object-Oriented Programming with C++

This repository contains a comprehensive collection of C++ programs demonstrating various Object-Oriented Programming (OOP) concepts. Each program is designed to illustrate specific OOP principles and advanced C++ features.

## Table of Contents

1. [Friend Functions and Classes](#1-friend-functions-and-classes)
2. [Dynamic Memory Management](#2-dynamic-memory-management)
3. [Static Members](#3-static-members)
4. [Constructors and Object Manipulation](#4-constructors-and-object-manipulation)
5. [Inheritance](#5-inheritance)
6. [Polymorphism](#6-polymorphism)
7. [Operator Overloading](#7-operator-overloading)
8. [Type Conversion](#8-type-conversion)
9. [Exception Handling](#9-exception-handling)
10. [Templates](#10-templates)
11. [File Operations](#11-file-operations)

---

## 1. Friend Functions and Classes

### Program 1: Friend Function with Multiple Classes (`1.cpp`)
**Concept**: Friend Functions


**Key Features**:
- Two classes `Vehicle1` and `Vehicle2` with private `price` members
- Friend function `max()` can access private data of both classes
- Forward declaration of `Vehicle2` class
- Comparison logic with equal price handling

**Learning Objectives**:
- Understanding friend functions
- Forward class declarations
- Cross-class data access

### Program 2: Swapping Values Using Friend Function (`2.cpp`)
**Concept**: Friend Functions for Data Manipulation

**Key Features**:
- Two separate classes `ClassA` and `ClassB`
- Friend function `swap()` exchanges private data between classes
- Reference parameters for in-place swapping
- Interactive input/output

**Learning Objectives**:
- Friend function implementation
- Reference parameters
- Inter-class data manipulation

### Program 3: Complex Number Addition Using Friend Class (`3.cpp`)
**Concept**: Friend Classes

**Key Features**:
- `Complex2` is declared as friend class of `Complex1`
- Friend class can access all private members
- Complex number arithmetic implementation
- Demonstrates one-way friendship (Complex1 trusts Complex2)

**Learning Objectives**:
- Friend class relationships
- Complex number operations
- Class-level access control

---

## 2. Dynamic Memory Management

### Program 4: Dynamic Constructor (`4.cpp`)
**Concept**: Dynamic Memory Allocation in Constructors

**Key Features**:
- Dynamic allocation using `new` operator
- Pointer-based data members
- Destructor for memory cleanup
- Complex number operations with dynamic memory

**Learning Objectives**:
- Dynamic constructors
- Memory management
- Destructor implementation
- Pointer arithmetic

### Program 5: Default Arguments with Dynamic Arrays (`5.cpp`)
**Concept**: Default Parameters and Dynamic Memory

**Key Features**:
- Default argument for interest rate (8%)
- Dynamic array allocation for multiple customers
- Simple interest calculation
- Array of objects with dynamic memory

**Learning Objectives**:
- Default function arguments
- Dynamic array allocation
- Object arrays
- Memory cleanup with `delete[]`

### Program 6: Dynamic Array for Sum Calculation (`6.cpp`)
**Concept**: Basic Dynamic Memory Allocation

**Key Features**:
- Runtime size determination
- Dynamic integer array allocation
- User input handling
- Memory deallocation

**Learning Objectives**:
- Basic dynamic memory concepts
- Runtime array sizing
- Proper memory cleanup

---

## 3. Static Members

### Program 7: Static Member Functions (`7.cpp`)
**Concept**: Static Data Members and Member Functions

**Key Features**:
- Static counter variable shared across all objects
- Static member function `showcount()` 
- Automatic object counting
- Class-level data management

**Learning Objectives**:
- Static data members
- Static member functions
- Object counting mechanisms
- Class-level operations

---

## 4. Constructors and Object Manipulation

### Program 8: Time Class with Object Addition (`8.cpp`)
**Concept**: Object Composition and Time Arithmetic

**Key Features**:
- Time representation with hours, minutes, seconds
- Object addition through member function
- Time overflow handling (seconds → minutes → hours)
- Constructor-like initialization function

**Learning Objectives**:
- Object composition
- Time arithmetic algorithms
- Overflow handling
- Object interaction patterns

---

## 5. Inheritance

### Program 9: Virtual Base Class (Diamond Problem) (`9.cpp`)
**Concept**: Virtual Inheritance and Diamond Problem

**Key Features**:
- Diamond inheritance pattern (A ← B,C ← D)
- Virtual inheritance prevents ambiguity
- Single instance of base class in derived object
- Multipath inheritance resolution

**Learning Objectives**:
- Virtual base classes
- Diamond problem solution
- Multiple inheritance complexities
- Ambiguity resolution

### Program 10: Composition Relationship (`10.cpp`)
**Concept**: Object Composition (Has-A Relationship)

**Key Features**:
- `Company` class contains `employee` object
- Composition vs inheritance demonstration
- Object delegation pattern
- Real-world modeling (Company has Employee)

**Learning Objectives**:
- Composition vs inheritance
- Object containment
- Has-A relationships
- Delegation patterns

### Program 11: Complex Multiple Inheritance (`11.cpp`)
**Concept**: Multiple Inheritance with Virtual Base Classes

**Key Features**:
- Four-level inheritance hierarchy
- Virtual inheritance to avoid duplication
- Multiple constructors with parameter passing
- Scope resolution for method calls

**Learning Objectives**:
- Complex inheritance hierarchies
- Virtual inheritance applications
- Constructor chaining
- Method disambiguation

### Program 12: Multiple Inheritance (`12.cpp`)
**Concept**: Basic Multiple Inheritance

**Key Features**:
- `gamma` inherits from both `alpha` and `beta`
- Constructor parameter forwarding
- Multiple parent class initialization
- Simple multiple inheritance pattern

**Learning Objectives**:
- Multiple inheritance basics
- Constructor delegation
- Multiple parent initialization

---

## 6. Polymorphism

### Program 13: Runtime Polymorphism (`13.cpp`)
**Concept**: Virtual Functions and Dynamic Binding

**Key Features**:
- Virtual function `makeSound()` in base class
- Override in derived classes (`Dog`, `Cat`)
- Runtime method resolution
- Polymorphic function calls

**Learning Objectives**:
- Virtual functions
- Runtime polymorphism
- Dynamic binding
- Override keyword usage

**Key Insight**: The `playSound()` function demonstrates how the same interface can produce different behaviors based on the actual object type at runtime.

---

## 7. Operator Overloading

### Program 14: Unary Minus Operator Overloading (`14.cpp`)
**Concept**: Unary Operator Overloading with Friend Functions

**Key Features**:
- Friend function approach for operator overloading
- Unary minus (`-`) operator implementation
- In-place value modification
- 3D coordinate system example

**Learning Objectives**:
- Unary operator overloading
- Friend function operators
- Coordinate system manipulation

---

## 8. Type Conversion

### Program 15: Polar to Rectangular Conversion (`15.cpp`)
**Concept**: User-Defined Type Conversion

**Key Features**:
- Conversion operator in `Polar` class
- Automatic type conversion using `operator Rectangle()`
- Trigonometric calculations (`cos`, `sin`)
- Mathematical coordinate transformation

**Learning Objectives**:
- Type conversion operators
- Automatic type conversion
- Mathematical transformations
- Trigonometric functions

### Program 16: Rectangular to Polar Conversion (`16.cpp`)
**Concept**: Reverse Type Conversion

**Key Features**:
- Conversion from rectangular to polar coordinates
- `atan()` and `sqrt()` mathematical functions
- Reverse transformation implementation
- Coordinate system interoperability

**Learning Objectives**:
- Bidirectional type conversion
- Mathematical function usage
- Coordinate system transformations

### Program 17: Meter to Feet/Inches Conversion (`17.cpp`)
**Concept**: Practical Unit Conversion

**Key Features**:
- Constructor-based type conversion
- Real-world unit conversion (metric to imperial)
- Floating-point arithmetic
- Practical measurement applications

**Learning Objectives**:
- Constructor conversion
- Unit conversion algorithms
- Floating-point precision
- Real-world applications

---

## 9. Exception Handling

### Program 18: Basic Exception Handling (`18.cpp`)
**Concept**: Try-Catch-Throw Mechanism

**Key Features**:
- Division by zero exception handling
- `try-catch-throw` block structure
- Integer exception throwing
- Graceful error handling

**Learning Objectives**:
- Exception handling basics
- Try-catch blocks
- Throw statements
- Error recovery

### Program 19: Multiple Exception Types (`19.cpp`)
**Concept**: Multiple Catch Blocks

**Key Features**:
- Different exception types (`int`, `char`, `double`)
- Multiple catch blocks for different data types
- Exception type matching
- Comprehensive error handling

**Learning Objectives**:
- Multiple exception types
- Catch block ordering
- Type-specific exception handling
- Exception hierarchy

---

## 10. Templates

### Program 20: Function Templates for Arithmetic (`20.cpp`)
**Concept**: Generic Function Templates

**Key Features**:
- Template functions for `sum()` and `product()`
- Generic programming with `template <class T>`
- Type-independent arithmetic operations
- Integer and float template instantiation

**Learning Objectives**:
- Function templates
- Generic programming
- Template instantiation
- Type parameterization

### Program 21: Template Function for Swapping (`21.cpp`)
**Concept**: Generic Swap Function

**Key Features**:
- Generic swap template function
- Works with any data type
- Reference parameters for in-place swapping
- Multiple data type demonstrations

**Learning Objectives**:
- Template function design
- Generic algorithms
- Reference template parameters
- Type flexibility

---

## 11. File Operations

### Program 22: Basic File I/O (`22.cpp`)
**Concept**: File Input/Output Operations

**Key Features**:
- `ofstream` for writing data
- `ifstream` for reading data
- Text file operations
- User data persistence

**Learning Objectives**:
- File stream operations
- Data persistence
- File I/O basics
- Text file handling

### Program 23: Multiple File Operations (`23.cpp`)
**Concept**: Working with Multiple Files

**Key Features**:
- Multiple file creation and reading
- Sequential file operations
- `getline()` for reading lines
- Batch file processing

**Learning Objectives**:
- Multiple file management
- Line-based file reading
- File operation sequencing
- Batch processing

### Program 24: Binary File Operations with Objects (`24.cpp`)
**Concept**: Object Serialization to Binary Files

**Key Features**:
- Binary file operations (`ios::binary`)
- Object serialization with `write()` and `read()`
- `reinterpret_cast` for binary data
- Conditional data filtering (salary > 25,000)

**Learning Objectives**:
- Binary file operations
- Object serialization
- Binary data casting
- File-based data filtering

---

## Key OOP Concepts Demonstrated

1. **Encapsulation**: Private data members with public interfaces
2. **Inheritance**: Single, multiple, and virtual inheritance
3. **Polymorphism**: Virtual functions and runtime binding
4. **Abstraction**: Template functions and operator overloading
5. **Data Hiding**: Friend functions and classes for controlled access
6. **Memory Management**: Dynamic allocation and proper cleanup
7. **Exception Handling**: Robust error management
8. **File Operations**: Data persistence and retrieval

## Prerequisites

- Basic C++ knowledge
- Understanding of classes and objects
- Familiarity with pointers and references
- Basic mathematical concepts for coordinate conversion programs
