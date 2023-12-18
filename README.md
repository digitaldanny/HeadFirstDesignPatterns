# Repo Description

This repo contains my personal solutions (or solution attempts) while reading through the textbook "Head First Design Patterns" by Eric Freeman and Elisabeth Robson.

The textbook examples are given in Java, but my solutions will be in C++ since that is the language I primarily use in my job.

# Repo Organization

Each chapter has its own folder in this repo, and individual puzzles or "design challenges" will have their own subfolder. Each chapter's README will contain my notes from the textbook, along with links to other references I used to clarify details.

Design challenge subfolders contain a README with notes about my solutions.

Design challenge subfolders will may also contain files copied from previous exercises, as sequential challenges sometimes build upon each other. This is a rare instance where I am allowing code duplication just to make referencing these files easier in the future.

# OOP Design Principles

- **Identify the aspects of your application that vary and separate them from what stays the same (ref. ch 1 pg 9).**
- **Program to an interface, not an implementation (ref. ch 1 pg 11).** We want interface subclasses that implement a specific behavior. Main classes should just have an instance of those interface subclasses, rather than implementing a behavior within the main class. If a behavior of the main class needs to change, we can just substitute which behavior subclass we use.
- **Favor composition over inheritance (ref. ch 1 pg 23).** Rather than inheriting behavior, get the behavior by using the correct behavior object (interface). This provides addition flexibility if the behavior of a class needs to change. If we inherited, changing the base class behavior would affect all subclasses rather than only the one we want to change.
- **Strive for loosely coupled designs between objects that interact (ref. ch 2 pg 54).**
- **The Open-Closed Principle:** Allow classes to be easily extended to incorporate new behavior without modifying existing code. This is not a rule you can apply 100% of the time; however, you should try to use it in areas that are most likely to change in a design.