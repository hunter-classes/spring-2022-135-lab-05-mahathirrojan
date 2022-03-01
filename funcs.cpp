#include <iostream>
#include "funcs.h"
#include <string> 

// add functions here

bool isDivisibleBy(int n, int d){
    std::string result = ""; 
    if(d == 0){
        return false; 
    }


    if(n % d == 0){
        return true; 
    }else{
        return false; 
    }
}

bool isPrime(int n){
    
}
