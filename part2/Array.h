
#include <stdlib.h>
#include "Object.h"

class Array : public Object {
    public:
        Object** data;
        size_t length;

    // Constructor
  Array(size_t len) {
        length = len;
        data = new Object*[len];
        
  }

  // Destructor
  virtual ~Array() {

  }

  // inserts the given object into the array and returns the array
  void insert(Object* obj, size_t index) {

  }

  // remove the item at the given index
  void remove(size_t index) {

  }

  // returns the length of the array
  size_t length() {

  }

  // gets the object from data stored at index
  Object* get(size_t index){

  }


};