//
//  catalog.hpp
//  Project 3
//
//  Created by Eric Han on 11/8/18.
//  Copyright © 2018 Eric Han. All rights reserved.
//

#ifndef catalog_hpp
#define catalog_hpp

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>
#include "Schedule(new).hpp"
#include "Course.hpp"
using namespace std;

class Catalog {//working on it 
public:
  void print();//not sure
  Catalog();
  Course getCourse(int index);// not sure
  int getNumCourses();
  int search(string newCourseId);//not sure
  void read();//not sure
  
private:
  Course courseObj[MaxNumCourses];
  int numCourses;//confuse on wording
};





#endif /* catalog_hpp */
