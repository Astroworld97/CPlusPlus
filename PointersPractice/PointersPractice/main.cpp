//
//  main.cpp
//  PointersPractice
//  Followed tutorial from https://www.youtube.com/watch?v=zuegQmMdy8M&t=1515s
//  Created by Ian Gonzalez on 1/3/21.
//  Copyright © 2021 Ian Gonzalez. All rights reserved.
//

#include <iostream>
using namespace std;


void practiceWithPointers(){
    int a; //regular int variable
    int* p; //pointer to an int, equivalent to 'int *p'
    p = &a; //makes the pointer 'p' point to the memory address of 'a'
    a = 5;
    cout << p << endl; //prints the address of 'a'
    cout << &a << endl; //prints the address of 'a'
    cout << &p << endl; //prints the address of 'p'
    cout << *p << endl; //prints the value of 'a', this is called "dereferencing"
    
    *p = 8;
    cout << a << endl; //the change in '*p' also changed 'a'
}

void workingWithPointers(){
    int a; //integer
    int *p; //pointer to integer
    char c; //character
    char *po; //pointer to character
    double d; //double
    double *p1; //pointer to double
    
    p = &a; //makes the pointer 'p' point to the memory address of 'a'
    a = 9;
    printf("%d\n", p); //prints the memory address that p points to, i.e., the address where a is stored
    printf("%d\n", *p); //prints value p points to
    cout << *p << endl; //also prints value p points to
}

void practice2(){
    int a;
    int *p;
    a = 10;
    p = &a; // &a = address of a
    printf("a = %d\n", a);
    *p = 12; //dereferencing: which means "to access or modify the value at that address"
    printf("a = %d\n", a);
}

void practice3(){
    int a;
    int *p;
    a = 10;
    p = &a; // &a = address of a
    printf("Address of P is %d\n", p);
    printf("Value at p is %d\n", *p);
    int b = 20;
    *p = b; //the address in p will NOT change to point b, only the value
    printf("Address of p is %d\n", p);
    printf("Value at p is %d\n", *p);
}

void practice4(){
    int a = 10;
    int *p = &a;
    //(p = &a) is not needed
}

void practice5(){
    int a = 10;
    int *p;
    p = &a;
    //pointer arithmetic
    printf("Address p is %d\n", p); //prints the memory address of 'a' stored in p. Assume it is 2002
    printf("size of integer is %d bytes\n", sizeof(int)); //will print 4 bc an integer takes up 4 bytes of memory
    printf("Address p+1 is %d\n", p+1); //this will print 2006 bc an integer takes 4 bytes of memory
    printf("value at address p+1 is %d\n", *(p+1));
    
}

void practice6(){
    int a = 1025;
    int *p = &a;
    printf("size of integer is %d\n", sizeof(int));
    printf("Address = %d, value = %d\n", p, *p);
    printf("Address = %d, value = %d\n", p+1, *(p+1));
    char *p0;
    p0 = (char*)p; //typecasting
    printf("size of integer is %d bytes\n", sizeof(char));
    printf("Address = %d, value = %d\n", p0, *p0);
    printf("Address = %d, value = %d\n", p0+1, *(p0+1));
    //the value prints out "1" because the bytes for 1025 look like:
    //1025 = 00000000 00000000 00000100 00000001
}

void voidPointer(){
    int a = 1025;
    int *p = &a;
    printf("size of integer is %d bytes\n", sizeof(int));
    printf("Address = %d, value = %d\n", p, *p);
    //void pointer is a generic pointer, not associated with any type
    void *p0;
    p0 = p; //this will not give you a compilation error
    //printf("Address = %d, value = %d\n", p0, *p0); //you cannot dereference this pointer bc it is not associated with a specific data type, so if you try to print *p0, it will give you an error
    //you can only print the address:
    printf("Address = %d", p0);
    //printf("Address = %d", p0+1); also gives a compilation error
    }

void pointerToPointer(){
    int x = 5;
    int* p = &x;
    *p = 6; //changes the value of x to 6
    int** q = &p;
    int*** r = &q;
    printf("%d\n", *p); //prints 6
    printf("%d\n", *q); //prints memory location of p
    printf("%d\n", *(*q)); //prints 6, equivalent to printf("%d\n", **q));
    printf("%d\n", *(*r)); //prints memory location of p
    printf("%d\n", *(*(*r))); //prints 6
}

void pointerToPointer2(){
    int x = 5;
    int* p = &x;
    *p = 6;
    int** q = &p;
    int*** r = &q;
    printf("%d\n", *p); //prints the value of x, which is 6
    printf("%d\n", *q); //prints the memory location of p
    printf("%d\n", **q); //prints the value of x, which is 6
    printf("%d\n", **r); //prints the memory location of p
    printf("%d\n", ***r); //prints the value of x, which is 6
    ***r = 10;
    printf("x = %d\n", x);
    **q = *p + 2; //x is incremented by 2
    printf("x = %d\n", x);

}

int main(){
    
    //an int is stored in 4 bytes
    //a char is stored in 1 byte
    //a float is stored in 4 bytes
    
    
    //practiceWithPointers();
    //workingWithPointers();
    //practice2();
    //practice3();
    //practice5();
    //practice6();
    //pointerToPointer();
    //pointerToPointer2();
    
    return 0;
}

