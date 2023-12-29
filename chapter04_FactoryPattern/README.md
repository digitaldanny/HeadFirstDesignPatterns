# Factory Pattern Summary

**Problem Statement:** This is most clearly shown with the example below..

```cpp
class MainClass
{
    BaseClass* object;

    MainClass(int value)
    {
        // PROBLEM STATEMENT:
        // Without a Factory, we have tied MainClass to 3 other classes 
        // since we don't know which of these subclasses will be used until
        // run time.
        // This class is no longer "closed for modification" because we 
        // will need to add new if-statements as new subclasses are made.
        if (value > 100)
            object = new SubClassA();
        else if (value > 50)
            object = new SubClassB();
        else
            object = new SubClassC();
    }
}
```

**Goal:** Encapsulate object creation to a Factory class.

**Why is this better? Isn't this just pushing the problem to a different class?**

The Factory may have MULTIPLE clients, so encapsulating that object creation means that we will only have one place to make modifications in the future.

# Key Terms

**Static Factory:** Instead of creating a different class to do the object instantiation, it is common to have a STATIC method that does the instantiation. So this method could be called without instantiating the class. However, one disadvantage is that static methods cannot be virtual/overriden by subclasses.

**Factory Method vs Abstract Factory:** Both are used to decouple applications from specific implementations by creating the necessary objects, but they do it in a different way.

- **Factory Method Pattern:** Create objects _through inheritence_. You need to extend a class and provide an implementation for a factory method.

- **Abstract Factory Pattern:** Create objects _through object composition_. Abstract Factory is an abstract type for creating a _family of products_. Subclasses of this type define how those products are produced. To use the factory, you instantiate one and pass it into some code that is written _against the abstract type_.
  - Pro: Group together a set of related products.
  - Con: If you need to add a new product to a group of related products, you will need to change the interface / every subclass' implementation.


# Diagram

Factory Method Pattern Diagram

![factoryMethod](/images/pg160-factoryMethod.jpg)

Abstract Factory Pattern

![absractFactory](/images/pg161_abstractFactory.jpg)