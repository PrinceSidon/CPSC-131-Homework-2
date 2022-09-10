#ifndef vector131_h
#define vector131_h
#pragma once
#include <iostream>


template <class T>

//Allows the user to create and interact with a dynamic array
class vector131 {
  //Length of the dynamic array
  int length;

  //Declares the dynamic array
  T *dynamicArray;

  public:
    //Creates a dynamic array with a length of iLen
    vector131(int iLen);

    //Returns the length of the dynamic array
    int getLength();

    //Returns the value of the dynamic array at a certain index
    int get(int index);

    //Sets the value of the dynamic array at a certain index
    void set(int index, T val);

    //Resizes the dynamic array to a length of newLen
    void resize(int newLen);

    //Increases the size of the array by 1 and adds val at the end
    void push_back(T val);

    //Increases the size of the array by 1 and adds val at the front
    void push_front(T val);

    //Increases the size of the dynamic array by 1 and adds val at a certain index
    void insert(int index, T val);

    //Decreases the size of the dynamic array by 1 and removes the value at index
    void remove(int index);

    //Prints out the dynamic array
    void print();
};

#endif
