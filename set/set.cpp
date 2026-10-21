// Set.cpp - implementaiton of Set.h
#include "set.h"
#include <set>

// Initializing the obj
Set::Set(std::set<int> my_set) : set(my_set) {}

// methods
std::set<int> Set::get_set() { return this->set; }
// insert method, but might not need since the set library already has these

// functions maybe just need the get set and then manipulate that set with all
// the set functions
void Set::insert(double val) { this->set.insert(val); }
bool Set::contains(double val) { return this->set.count(val) > 0; }
