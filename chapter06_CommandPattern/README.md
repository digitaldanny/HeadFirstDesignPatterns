# Command Pattern Summary

**Goal:** Encapsulates a request as an object, allowing you to support various types of requests, queues, logs, undoable actions.

![commandPatternImg](/images/pg207-commandPattern.jpg)

# Key Terms

# Pros and Cons

**Pro:** It is simply an interface that provides an 'execute' or 'undo' command (or other operations) that the invoker knows will always be available. This is useful because requests may not have a consistent set of operations. For example, 'execute' could be a simple on-off, or it could be a multi-state operation.

**Con:** Lots of small command classes to achieve a simple goal.

# Diagram