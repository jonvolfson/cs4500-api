DECISIONS WE'VE MADE

Object: Our object class only needs to have a hash function, equals function and print function. We need a hash method to distinguish object from one another based on memory location (or some other metric). The equals function is useful when checking or comparing multiple objects. Print is useful for generating useful debugging info for each object based on the object's state when it is called.

String: Follows the same thought process as the Object class but we also included a compare method for when we want to order string a certain way (ex length, alphabetical, etc). Strings are also able to return its length.

Array: Our array class is a container class for a built-in array. It contains a length for the number of objects it can hold and a pointer to an Object array for its actual contents. It can insert a new Object at a given index assuming the index is within the length and can also get the Object held at a certain index. Additionally, one is able to remove an object from a given index if it is within the length.

We feel that these are the basic functions our classes need to implement until more requirements are made clear.
