
#include <stdlib.h>
#include "Object.h"

class Array : public Object {
    public:
        void** data; // when implementing stringArray subclass, useful to use Object** instead
        size_t length_;

    // Constructor
  Array(size_t len) {
        
        
  }

  // Destructor
  virtual ~Array() {

  }

  // inserts the given object into the array and returns the array
  void insert(void* obj, size_t index) {

  }
    
  // adds the given object to the end of the array 
  void add(void* obj) {
  
  }

  // remove the item at the given index
  void remove(size_t index) {

  }

  // returns the length of the array
  size_t length() {

  }
    
  // returns the number of elements currently in the array (if implementing as resizeable arrayList, count of items may differ from total length)
  size_t count() {
      
  }

  // gets the object from data stored at index
  Object* get(size_t index){

  }


};
