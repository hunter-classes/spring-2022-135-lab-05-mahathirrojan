#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A tests: "){
    CHECK(isDivisibleBy(100,25) == true);
    CHECK(isDivisibleBy(35,17) == false);
    CHECK(isDivisibleBy(10,2) == true);
    CHECK(isDivisibleBy(17,3) == false);
}

TEST_CASE("Task B Tests: "){
    CHECK(isPrime(2) == true); 
    CHECK(isPrime(17) == true);
    CHECK(isPrime(1) == false);
    CHECK(isPrime(18) == false); 
    CHECK(isPrime(7) == true); 
}

TEST_CASE("Task C Test: "){
    CHECK(nextPrime(14) == 17); 
    CHECK(nextPrime(17) == 19);
    CHECK(nextPrime(3) == 5); 
    CHECK(nextPrime(7) == 11);
}

TEST_CASE("Task D Tests: "){
    CHECK(countPrimes(1,6) == 3);
    CHECK(countPrimes(9,12) == 1);
    CHECK(countPrimes(10,20) == 4);
}

TEST_CASE("Task E Tests: "){
    CHECK(isTwinPrime(5) == true); 
    CHECK(isTwinPrime(11) == true); 
    CHECK(isTwinPrime(17) == true); 
    CHECK(isTwinPrime(23) == false); 
    CHECK(isTwinPrime(47) == false);
}

TEST_CASE("Task F Tests: "){
    CHECK(nextTwinPrime(5) == 7);
    CHECK(nextTwinPrime(11)== 13);
    CHECK(nextTwinPrime(17) == 19); 
    CHECK(nextTwinPrime(41) == 43); 
}

TEST_CASE("Task G Tests: "){
    CHECK(largestTwinPrime(4, 10) == 7); 
    CHECK(largestTwinPrime(11, 19) == 19); 
    CHECK(largestTwinPrime(7,13) == 13); 
}
// add your tests here
