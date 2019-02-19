//
//  menu.cpp
//  Project 3
//
//  Created by Eric Han on 11/8/18.
//  Copyright © 2018 Eric Han. All rights reserved.
//

#include "menu.hpp"
#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

Menu::Menu(){
  errorMessage = "";
  title = "";
  curr = 0;
}

void Menu::setErrorMessage(string newError){
  errorMessage= newError;
}

string Menu::getTitle(){
  return title;
}

string Menu::getErrorMessage(){
  return errorMessage;
}

void Menu::addOption(char newOption, string newOptDescription){
  
  if(curr < 5){
    option[curr] = newOption;
    desciption[curr] = newOptDescription;
    curr++;
  }
  else{
    cout << "no room for more options\n";
  }
}

char Menu::doMenu(){
  char letter;
  cout << title << endl;
  for(int i = 0; i < curr; i++){
    cout << option[i] << "-" <<desciption[i] << endl;
  }
  cout << "Enter option: ";
  cin >> letter;
  while(validOption(letter) == false){
 
  
     cout <<  errorMessage;
      cout << "Enter option: ";
      cin >> letter;
    }
  return letter;
  }


bool Menu::validOption(char NewOption){
  for(int i = 0; i < curr; i++){
    if(option[i] == NewOption){
    return true;
  }
  }
  return false;
}


void Menu::setTitle(string newTitle){
  title = newTitle;
}

