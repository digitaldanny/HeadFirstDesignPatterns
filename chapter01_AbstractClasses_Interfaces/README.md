# Key Terms

**Abstract Class:** 
- [CPP Reference - Abstract Class](https://en.cppreference.com/w/cpp/language/abstract_class)
- Definition: An abstract class is a class that either defines or inherits at least one function for which the final overrider is pure virtual.
- Simplified Definition: Among several classes, there is some common behavior. Use abstract classes to take those common behaviors and put them into one "Abstract Class." Individual classes that inherit from the abstract class will override virtual functions with their own behaviors.
- Abstract classes are used to represent general concepts (for example, Shape, Animal), which can be used as base classes for concrete classes (for example, Circle, Dog).
- No objects of an abstract class can be created (except for base subobjects of a class derived from it) and no non-static data members whose type is an abstract class can be declared.
- Abstract types cannot be used as parameter types, as function return types, or as the type of an explicit conversion (note this is checked at the point of definition and function call, since at the point of function declaration parameter and return type may be incomplete).

**Interface:**
- NOTE: C++ does not contain an official "interface" keyword like Java. Equivalent behavior would be to use abstract classes with only _pure_ virtual methods. More info on this below.
- An interface is a group of related methods with empty bodies. 
- Subclasses are responsible for implementing all methods defined in the interface.
- Interface cannot contain a constructor.

**Virtual vs Pure Virtual Methods C++:**
- [Stack Overflow - Virtual vs Pure Virtual in C++](https://stackoverflow.com/questions/1306778/virtual-pure-virtual-explained)
- Virtual: Virtual is the keyword which designates that a method can be overridden a subclass; however, _the base class implementation would be called if the subclass doesn't define its own version_.
- Pure Virtual: The term pure virtual refers to virtual functions that _need to be implemented by a subclass and have not been implemented by the base class_.

# FAQ

**When to use Abstract Class vs Interface?**
- [Youtube - Interfaces vs Abstract Classes](https://www.youtube.com/watch?v=PPZ_vZcF2AU)
- Diff 1: Abstract class contains both DECLARATION and DEFINITION. Interface contains only DECLARATION.
- Diff 2: You can only inherit from ONE abstract class, but you can inherit from MULTIPLE interfaces.
- Diff 3: Abstract class can have constructor but not interfaces.
- ABSTRACT CLASS is a good choice when you are sure some methods are concrete/defined and must be implemented the SAME WAY in all derived classes.
- INTERFACE is a good choice because it gives us the flexibility to modify the behavior at a later stage in the subclass, and we can pull in behaviors when necessary.
