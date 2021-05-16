//
//  practice.cpp
//  C++Practice
//
//  Created by Ian Gonzalez on 1/1/21.
//  Copyright © 2021 Ian Gonzalez. All rights reserved.
//

//Este programa usa practice2.cpp y practice.hpp para hacer un hashtable a mano.

#include "practice.hpp"
#include <iostream>

using namespace std;

int main(){
    PracticeClass pc;
    int keys[13];
    int key = 0;
    int posicion = 0;
    int check = 0;
    
    for(int i=0; i< 13; i++){
        keys[i] = -1;
    }
    
    cout << "Para salir, entra -999" << endl;
    
    do{
        cout << "Entra un número: ";
        cin >> key;
        
        if(key == -999){
            break;
        }
        
        posicion = pc.hashing(key);
        if(keys[posicion]==-1){
            keys[posicion] = key;
        }else{
            while(keys[posicion] != -1){
                posicion = pc.rehash(posicion);
            }
            keys[posicion] = key;
        }
        
        
        for(int i=0; i<13; i++){
            cout << keys[i] << endl;
        }
        
    }while (check != 13);
    
    
    
    return 0;
}


