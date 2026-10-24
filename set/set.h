#pragma once
#include <initializer_list>
#include <iostream>
#include <set>

// allows the class to be flexible and hold elements of any type specified by the user, using double as default
template <typename T = double>

class Set {
  // creates the set using our versitaile type
  // automatically private until specified public
  std::set<T> data;
  
public:
  // constructor
  Set() = default;
  Set(std::initializer_list<T> values) : data(values) {}

  // Methods:
  // get set (apparently this is real bad to have)
  std::set<int> get_set();
  // insert element
  void insert(const &T value);
  bool is_subset(const Set &other) const;
};


template<typename T>
void Set::insert(const T& value) {
  data.insert(value);
}
bool Set::is_subset(const Set& other)

#endif
