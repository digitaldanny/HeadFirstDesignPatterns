# Observer Pattern Summary

**Goal:** Subject objects notify observer objects when something they care about has happened. An observer may subscribe/unsubscribe to the subject during runtime.

# Key Terms

**One-to-Many Relationships:** When one object containing the state (subject) changes, it automatically notifies all its dependents (observers).

**Loose Coupling:** Loosely coupled designs give us better flexibility due to having classes that are less dependent on each other. It helps with creating simple "modules" with one job that we can add/remove as needed, rather than having an over-complicated, single product. Some signs of loose-coupling are clearly defined interfaces, objects that function independently from other objects, and modifications to an object that do not affect functionality of another object.

**Concrete Observer:** Any class that implements the Observer interface. Each observer registers with a Concrete Subject to receive updates.

**Concrete Subject:** Any class that implements the Subject interface. In addition to register/remove methods, concrete subject implements a notifyObservers method when the state changes.

# Diagram

In the below example, CricketData is the **ConcreteSubject** and will call to "notifyObservers" when its state changes. Subject's notifyObservers method will iterate through the list of observers, calling the "update" method. 

CurrentScore and AverageScoreDisplay are the **ConcreteObservers**.

![Observer Diagram](/images/ObserverPatternSet-2.png)

# Observer vs Polling

- Polling Pro: Simple to set up and predictable. You can step through the code and easily see where things will change. In a multi-threaded environment where the observer/subject run separately, debug may be more challenging.
- Polling Con: Wastes CPU cycles asking for state data that may not have changed.
- In an environment where CPU performance impact is negligable, there may be an argument to use polling over observer.


