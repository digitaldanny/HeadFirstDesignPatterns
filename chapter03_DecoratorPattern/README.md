# Decorator Pattern Summary

**Goal:** Inheritance can become overused. Decorating classes at runtime gives objects new responsibilities without making any code changes to the underlying classes.

# Key Terms

**Decorator Class:** The decorator's base type should mirror the object it is decorating. The outermost decorator is then responsible for delegating method calls to the classes it's decorating.

![decorator](/images/pg90-decorator.jpg)

**Inheritance (is-a) vs Composition (has-a):** Both promote code reuse through different approaches. Composition uses an "instance" of a class to use its behavior, while Inheritance will extend a base-class to use its behavior.

# Pros and Cons

- **Pro 1:** Add flexibility to designs with runtime configurable behavior (as opposed to compile-time like inheritance).
- **Pro 2:** You can insert decorators transparently, so the user application doesn't need to even know it's dealing with a decorator.
- **Con 1:** Results in many small classes that can make designs difficult to navigate.
- **Con 2:** Related to Pro 2, code that relies on specific types may break if an object is decorated.

# Diagram

![decoratorPattern](/images/pg91-decoratorpattern.jpg)