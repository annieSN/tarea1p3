//
// Created by rudri on 10/11/2020.
//
#include <iostream>
#include "polynomial.h"
#include <cassert>
#include<cmath>
using namespace ;

class Polynomila{
  friend void Poland (int x);
  Polynomila(){};
  Polynomila operator+(const Polynomila& otro) {
    return Polynomila(x + otro.x, y + otro.y);
}


};




