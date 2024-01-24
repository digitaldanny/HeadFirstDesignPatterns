# Command Pattern Summary

**Goal:** Encapsulates a request as an object, allowing you to support various types of requests, queues, logs, undoable actions.

# Key Terms

**Client:** Creates the concrete commands and sets the receiver (setCommand).

**Receiver:** Actually carries out the operation - the low-level implementation is here, and the command class will encapsulate this work into the standardized operations.

**Invoker:** Holds commands and calls "execute" at some point to carry out the request.

# Pros and Cons

**Pro 1:** It is simply an interface that provides an 'execute' or 'undo' command (or other operations) that the invoker knows will always be available. This is useful because requests may not have a consistent set of operations. For example, 'execute' could be a simple on-off, or it could be a multi-state operation.

**Pro 2:** Decouples invoker from the object that knows how to execute the operation.

**Con:** Lots of small command classes to achieve a simple goal.

# Diagram

![commandPatternImg](/images/pg207-commandPattern.jpg)