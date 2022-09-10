#include "vector131.hpp"

//Creates a dynamic array with a length of iLen
template <class T>
vector131<T>::vector131(int iLen) {
  length = iLen;
  dynamicArray = new T[length];
}

//Returns the length of the dynamic array
template <class T>
int vector131<T>::getLength() {
  return length;
}

//Returns the value of the dynamic array at a certain index
template <class T>
int vector131<T>::get(int index) {
  return dynamicArray[index];
}

//Sets the value of the dynamic array at a certain index
template <class T>
void vector131<T>::set(int index, T val) {
  dynamicArray[index] = val;
}

//Resizes the dynamic array to a length of newLen
template <class T>
void vector131<T>::resize(int newLen) {
  
  //Saves the values of the old array and deletes the old array
  T oldArray[length];
  for (int i = 0; i < length; i++) {
    oldArray[i] = dynamicArray[i];
  }
  delete[] dynamicArray;

  //Creates a new array with a length of newLen that has the values of the old array
  //If the old array is bigger than the new one, the extra values are cut off
  dynamicArray = new T[newLen];
  if (newLen > length) {
    for (int i = 0; i < length; i++) {
      dynamicArray[i] = oldArray[i];
    }
  }
  else if (length > newLen) {
    for (int i = 0; i < newLen; i++) {
      dynamicArray[i] = oldArray[i];
    }
  }
  length = newLen;
}

//Increases the size of the array by 1 and adds val at the end
template <class T>
void vector131<T>::push_back(T val) {
  resize(length + 1);
  set(length - 1, val);
}

//Increases the size of the array by 1 and adds val at the front
template <class T>
void vector131<T>::push_front(T val) {
  
  //Saves the values of the old array and resizes
  T oldArray[length];
  for (int i = 0; i < length; i++) {
    oldArray[i] = dynamicArray[i];
  }
  resize(length + 1);

  //Pushes the old values forward and sets the value at index 0 to val
  for (int i = 0; i < length - 1; i++) {
    dynamicArray[i+1] = oldArray[i];
  } 
  set(0, val);
}

//Increases the size of the dynamic array by 1 and adds val at a certain index
template <class T>
void vector131<T>::insert(int index, T val) {

  //Saves the values of the old array and resizes
  T oldArray[length];
  for (int i = 0; i < length; i++) {
    oldArray[i] = dynamicArray[i];
  }
  resize(length + 1);

  //The values before the index stay the same
  //The value at the index gets changed to val
  //The remaining values get shifted forward
  for (int i = 0; i < length; i++) {
    if (i < index) {
      dynamicArray[i] = oldArray[i];
    }
    else if (i == index) {
      dynamicArray[i] = val;
    }
    else {
      dynamicArray[i] = oldArray[i - 1];
    }
  } 
}

//Decreases the size of the dynamic array by 1 and removes the value at index
template <class T>
void vector131<T>::remove(int index) {
  
  //Saves the values of the old array and resizes
  T oldArray[length];
  for (int i = 0; i < length; i++) {
    oldArray[i] = dynamicArray[i];
  }
  resize(length - 1);

  //The values before the index stay the same
  //The values after the index get shifted backward
  for (int i = 0; i < length; i++) {
    if (i < index) {
      dynamicArray[i] = oldArray[i];
    }
    else {
      dynamicArray[i] = oldArray[i + 1];
    }
  }
}

//Prints out the dynamic array
template <class T>
void vector131<T>::print() {
  for (int i = 0; i < length; i++) {
    std::cout << dynamicArray[i] << " ";
  }
  std::cout << std::endl;
}