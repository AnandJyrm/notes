<-- Notes on stack smashing 18 Nov, 2024 -->

https://inst.eecs.berkeley.edu/~cs161/fa08/papers/stack_smashing.pdf

## Stack Smashing

Process Memory Regions: Text, Data, Stack

```
/------------------\ lower
|                  | memory
|      Text        | addresses
|                  |
|------------------|
|   (Initialized)  |
|       Data       |
|  (Uninitialized) |
|------------------|
|                  |
|       Stack      | higher
|                  | memory
\------------------/ addresses
```

Text region include codes and is read-only, writing to it will result in segmentation violation.


Register called the Stack Pointer (SP) points to the top of the stack (usually lowest numerical address). The bottom of the stack is at a fixed address.

A stack frame contains the parameters to a function, its local variables and the data necessary to recover the previous stack frame, including the value of the instruction pointer at the time of the function call.
Frame pointer points to a fixed location within a frame.
