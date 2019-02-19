//
//  menu.hpp
//  Project 3
//
//  Created by Eric Han on 11/8/18.
//  Copyright © 2018 Eric Han. All rights reserved.
//

#ifndef menu_hpp
#define menu_hpp

#include <stdio.h>
#include <iostream>
#include<string>
#include<iomanip>
#include "Schedule(new).hpp"
using namespace std;

class Menu {
public:
  Menu();
  void setTitle(string newTitle);
  void setErrorMessage(string newError);
  string getTitle();
  string getErrorMessage();
  void addOption(char newOption, string newOptDescription);
  char doMenu();
  bool validOption(char NewOption);
private:
  char menuOptions[MaxNumCourses];
  char option[5];
  string desciption[5];
  string errorMessage;
  string title;
  int curr;
};

#endif /* menu_hpp */
