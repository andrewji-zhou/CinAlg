#pragma once
#include <vector>
#include <initializer_list>


#include <initializer_list>
template <typename T = double>

class Vector {
  std::vector<T> data;


public: 
  // constructors
  Vector() = default;
  Vector(std::initializer_list<T> values) : data(values) {}

  // short methods
  void insert(const T& value) { data.insert(value); }
  void remove(const T& value) { data.erase(value); }
  void clear() { data.clear(); }

  T at(int index) const { return data.at(index); } // opted for this rather than operator[] for bounds checking safety
  bool empty() const { return data.empty(); } 
  int size() const { return data.size(); }

  auto begin() const { return data.begin(); }
  auto end() const { return data.end(); }

  // involved methods
  // creates a new vector with sum
  Vector<T> sum(const Vector& other) const {

  }

  // adds specified vector onto main vector
  void add_to(const Vector& other) {

  }

  Vector<T> scale_new(const T& val) {

  }

  void scale(const T& val) {

  }

  T dot_prod(const Vector& other) {

  }

  bool equal(const Vector& other) const {

  }
};
