# Key Terms

**Abstract Class:** 
- Reference: https://en.cppreference.com/w/cpp/language/abstract_class
- An abstract class is a class that either defines or inherits at least one function for which the final overrider is pure virtual.
- Abstract classes are used to represent general concepts (for example, Shape, Animal), which can be used as base classes for concrete classes (for example, Circle, Dog).
- No objects of an abstract class can be created (except for base subobjects of a class derived from it) and no non-static data members whose type is an abstract class can be declared.
- Abstract types cannot be used as parameter types, as function return types, or as the type of an explicit conversion (note this is checked at the point of definition and function call, since at the point of function declaration parameter and return type may be incomplete).

