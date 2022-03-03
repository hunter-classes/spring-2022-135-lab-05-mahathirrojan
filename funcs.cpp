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
   if(n % 2 != 0 && n > 2){
       for(int z = 2; n>=z; z++){
           if(n % z == 0 && n != z){
               return false; 
           }
       }
   }else if(n < 2){
       return false; 
   }else if(n % 2 == 0 && n > 2){
       for(int i = 2; i<=n; i++){
           if(n % i == 0 && i != n){
               return false; 
           }
       }

   }

   return true; 
}

int nextPrime(int n){
    int count = n + 1; 

    while(!isPrime(count)){
        count++; 
    }
    return count; 
}

int countPrimes(int a, int b){
    int count = 0; 

    for (int z = a; z<= b; z++){
        if(isPrime(z)){
            count++; 
        }
    }
    return count; 

}


bool isTwinPrime(int n){
    if(isPrime(n) == true){
        if(isPrime(n + 2) == true || isPrime(n-2) == true){
            return true; 
        }else{
            return false; 
        }
    }
    return false; 


}

int nextTwinPrime(int n){
    do{
        n++;
    }
    while(!isPrime(n));

    return n; 
}

int largestTwinPrime(int a, int b){
    int maxtwinprime = -1; 

    for(int i = b; i >= a; i--){
        if(isTwinPrime(i)){

            maxtwinprime = nextTwinPrime(i-1); 
            break; 
        }
    }
    return maxtwinprime; 

}