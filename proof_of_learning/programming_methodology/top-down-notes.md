# Key Concepts of Top Down Programming 

These are my study notes for top down programming 

1. Definition, Advantages, and Disadvantages

- Definition: 
    - "In the top-down model, an overview of the system is formulated without going into detail for any part of it. Each part of it then refined into more details, defining it in yet more details until the entire specification is detailed enough to validate the model."1
    - "Functional Decomposition is a design method intending to produce a non-implementation, architectural description of a computer program. The software architect first establishes a series of functions and types that accomplishes the main processing problem of the computer program, decomposes each to reveal common functions and types, and finally derives Modules from this activity."3

- Advantages: 
    - "Breaking problems into parts help us to identify what needs to be done."1
    - "At each step of refinement, new parts will become less complex and therefore easier to solve."1
    - "Parts of the solution may turn out to be reusable."1
    - "Breaking problems into parts allows more than one person to solve the problem."1
    - "Easier isolation of interface errors"1
    - "It benefits in the case error occurs towards the top of the program."1
    - "Defects in design get detected early and can be corrected as an early working module of the program is available."1
    - "Before processing into the implementation part, it focuses on defining the interfaces and relationships between these detailed components."2
    - "This approach mainly works on creating recursive function calls to solve the sub-modules."2
    - "It focuses more on emphasizing the larger module at the beginning and later it refines that broader part into refined components."2
    - "The primary advantage of the top-down approach is that it helps in understanding the overall functionality and structure easily."2

- Disadvantages
    - "Difficulty in observing the output of test case."1
    - "Stub writing is quite crucial as it leads to setting of output parameters."1
    - "When stubs are located far from the top level module, choosing test cases and designing stubs become more challenging."1


Sources: 

1. [Difference between Bottom-Up Model and Top-Down Model](https://www.geeksforgeeks.org/difference-between-bottom-up-model-and-top-down-model/)
2. [What is Top-Down and Bottom-Up Approach in Java?](https://www.geeksforgeeks.org/what-is-top-down-and-bottom-up-approach-in-java/)
3. [Functional decomposition](https://en.wikipedia.org/wiki/Functional_decomposition)