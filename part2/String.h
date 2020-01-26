#include "object.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>



class String: public Object {
  public:
    char* val_;
    size_t length_;

  // Constructor
  String(char* val) {
    
  }

  // Constructor -- w/ const char
  String(const char* val) {
    
  }

  // Destructor
  virtual ~String() {

  }

  //  Prints the string
  void print() {
    
  }

  // return a hash for this String
  size_t hash_me() {
    
  }

  // hashes this string
  size_t hash() {
    
  }

  // check if this String is equal to the given object
  bool equals(Object *o) {
    
  }

  // compares this String to another object for ordering purposes
  int compare(Object *o) {
    
  }

  // returns the length of the string
  size_t length() {

  }

  


};
