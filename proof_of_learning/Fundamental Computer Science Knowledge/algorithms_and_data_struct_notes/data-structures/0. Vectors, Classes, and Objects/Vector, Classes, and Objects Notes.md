# Vectors, Classes, and Objects Study Notes for Microsoft Software Engineering

## Python

| Topic              | Key Points                                                                                                                                   | Notes                                                                                                                       | Memorize or Understand?                              |
|--------------------|----------------------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------|------------------------------------------------------|
| Vectors            | Use NumPy arrays for efficient mathematical operations; lists work for simple vector-like collections.                                       | Understanding NumPy indexing and functions like `dot()` for dot products is essential.                                      | **Understand** and be able to apply and explain.     |
| Classes            | Defined with `class`, using `__init__` for initialization; supports inheritance, encapsulation, and polymorphism.                            | Python’s dynamic nature allows easy extension and modification, useful for rapidly evolving project requirements.           | **Understand** OOP principles; **memorize** syntax.  |
| Objects            | Objects are instances of classes and can be modified dynamically. Methods and attributes are accessed via dot notation.                      | Be ready to discuss the benefits of Python’s object model, like duck typing, for flexible yet robust application design.    | **Understand** Python’s object model deeply.         |

### Links

- [Think Python by Allen B. Downey](https://allendowney.github.io/ThinkPython/)

---

## C#

| Topic              | Key Points                                                                                                                | Notes                                                                                                                        | Memorize or Understand?                                   |
|--------------------|---------------------------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------|
| Vectors            | `List<T>` for dynamic collections; `Array` for fixed-size collections; `Vector<T>` from `System.Numerics` for math ops.  | Know when to use each type for performance. `Vector<T>` is especially optimized for mathematical operations.                 | **Understand** use cases; **memorize** basic syntax.      |
| Classes            | Defined with `class`; support for full OOP principles: inheritance, encapsulation, and polymorphism via interfaces.       | C# classes include properties, methods, events, and constructors. Be familiar with `public`, `private`, `protected` access. | **Memorize** syntax and keywords; **understand** concepts.|
| Objects            | Strongly-typed instances; created with `new ClassName()`. Constructors initialize attributes when objects are created.    | Know how object lifecycles affect memory management in .NET’s garbage collection.                                           | **Understand** memory impact; **memorize** syntax.        |

### Links

- [Microsoft C# Documentation](https://docs.microsoft.com/en-us/dotnet/csharp/)

---

## C

| Topic              | Key Points                                                                                                                 | Notes                                                                                                                    | Memorize or Understand?                             |
|--------------------|----------------------------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------|----------------------------------------------------|
| Vectors            | No built-in vector type; arrays or dynamically allocated memory with pointers (`malloc`) are used.                         | Efficient memory management is crucial for performance; know when to free dynamically allocated memory.                   | **Understand** memory allocation; **memorize** `malloc/free`.|
| Classes            | C doesn’t support OOP, but structs can simulate objects and encapsulation by grouping data and function pointers.          | Using structs for complex data types is a common practice, especially in low-level systems or embedded applications.     | **Understand** struct functionality.               |
| Objects            | C does not have objects. However, structs and function pointers create modular and reusable code similar to OOP.           | Practice modular coding by using structs effectively, especially in cases where a class-like structure is useful.        | **Understand** modular coding with structs.        |

### Links

- [The C Programming Language by Brian W. Kernighan and Dennis M. Ritchie](https://en.wikipedia.org/wiki/The_C_Programming_Language)

---

### Key Takeaways for Microsoft Software Engineering
- **Python**: Focus on mastering libraries like NumPy for mathematical and data-driven operations. Have a strong understanding of Python’s flexibility with classes and OOP principles.
- **C#**: Know the language’s OOP features and be comfortable with C#’s type-safe and memory-managed environment in .NET. Be familiar with performance differences among data types (like `Array`, `List<T>`, `Vector<T>`).
- **C**: Master efficient memory management, especially when dealing with pointers and dynamic memory allocation. Know how to simulate object-like functionality in C for modular code structuring.

Understanding these concepts conceptually and being able to explain their use cases and performance implications is essential for a software engineering role at Microsoft, where code efficiency, maintainability, and scalability are key.