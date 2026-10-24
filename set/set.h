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

  // simple one line methods can be declared in the class to keep syntax clean
  void insert(const T& value) { data.insert(value); }
  void remove(const T& value) { data.erase(value); }
  void clear() { data.clear(); }

  bool contains(const T& value) { return data.contains(value); }
  std::size_t size() const { return data.size(); }
  bool empty() const { return data.empty(); }

  auto begin() const { return data.begin(); }
  auto end() const { return data.end(); }

  // just signature is intialized here, defined below since its multi-lines
  bool is_subset(const Set& other) const;
};


template<typename T>
bool Set<T>::is_subset(const Set& other) const {
  for (const T& x : *this) {
    if (!other.contains(x)) return false;
  }

  return true;
}

