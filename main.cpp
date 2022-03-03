#include <iostream>


#include "funcs.h"

int main()
{
  std::cout << "Task A main results:" << std::endl; 
  std::cout << "isDivisiblieBy(100,25):" << std::endl; 
  std::cout << isDivisibleBy(100,25) << std::endl; 
  std::cout << "isDivisibleBY(35,17)" << std::endl; 
  std::cout << isDivisibleBy(35,17) << std::endl; 
  std::cout << "\n----------------------------------\n";

  std::cout << "Task B main results:" << std::endl; 
  std::cout << "isPrime(2)" << std::endl; 
  std::cout << isPrime(2) << std::endl; 
  std::cout << "isPrime(9)" << std::endl; 
  std::cout << isPrime(9) << std::endl;

  std::cout << "\n----------------------------------\n";

  std::cout << "Task C main results:" << std::endl; 
  std::cout << "nextPrime(7)" << std::endl; 
  std::cout << nextPrime(7) << std::endl; 
  std::cout << "nextPrime(13)" << std::endl; 

  std::cout << "\n----------------------------------\n";

  std::cout << "Task D main results: " << std::endl;
  std::cout << "countPrimes(1,10)" << std::endl; 
  std::cout << countPrimes(1,10) << std::endl; 
  std::cout << "countPrimes(10,20)" << std::endl;
  std::cout << countPrimes(10,20) << std::endl;

  std::cout << "\n----------------------------------\n";

  std::cout << "Task E main results:" << std::endl; 
  std::cout << "isTwinPrime(7)" << std::endl;
  std::cout << isTwinPrime(7) << std::endl;
  std::cout << "isTwinPrime(17)" << std::endl;
  std::cout << isTwinPrime(17) << std::endl;

  std::cout << "\n----------------------------------\n";

  std::cout << "Task F main results:" << std::endl;
  std::cout << "nextTwinPrime(11)" << std::endl; 
  std::cout << nextTwinPrime(11) << std::endl; 
  std::cout << "nextTwinPrime(41)" << std::endl;
  std::cout << nextTwinPrime(41) << std::endl; 

  std::cout << "\n----------------------------------\n";

  std::cout << "Task G main results:" << std::endl;
  std::cout << "largestTwinPrime(4,9)" << std::endl;
  std::cout << largestTwinPrime(4,9) << std::endl;
  std::cout << "largestTwinPrime(11,20)" << std::endl; 
  std::cout << largestTwinPrime(11,20) << std::endl;

  return 0;
}
