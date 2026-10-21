#ifndef SET_H
#define SET_H
#include <iostream>
#include <set>

class Set {
private:
  // set
  std::set<int> set;

public:
  // constructor
  Set(std::set<int> my_set);

  // Methods:
  // get set
  std::set<int> get_set();
  // insert element
  void insert(double val);
  // contains
  bool contains(double val);
};

#endif
