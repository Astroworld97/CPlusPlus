//
//  practice2.cpp
//  C++Practice
//
//  Created by Ian Gonzalez on 1/1/21.
//  Copyright © 2021 Ian Gonzalez. All rights reserved.
//

#include <stdio.h>
#include "practice.hpp"

using namespace std;

int PracticeClass::hashing(int key){ //fxn name: hashing, que viene de PracticeClass, que fue declarada en practice.hpp
    int posicion = 0;
    posicion = key%13;
    return posicion;
}


int PracticeClass::rehash(int posicion){
    int p = 0;
    posicion = (posicion + 1) % 13;
    p = posicion;
    return p;
}


int PracticeClass::hayEspacio(int a[], int check){ //cuenta cuántos espacios hay
    int i = 0;
    int c = 0;
    check = 0;
    do{
        if(a[i]>-1){
            check++;
        }
    }while(i < 13);
    c = check;
    return c;
}
