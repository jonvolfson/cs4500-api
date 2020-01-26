#include <stdlib.h>

class Object {
  public:
    size_t hash_;

  // Constructor
  Object() {

  }

  // Destructor
  virtual ~Object() {

  }

  // checks if this object is equal to the given object
  virtual bool equals (Object* other) {

  }

  // hashes this object
  virtual size_t hash() {
  
  }

  // returns a hash value
  virtual size_t hash_me() {

  }

  // prints out this object
  virtual void print() {

  }

};
