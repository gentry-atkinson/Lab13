#include "Analyzer.h"

Analyzer::Analyzer()
{

}


bool Analyzer::isPrime(int i){
    /**********************************
    This method should return true if number is prime.
    We are going to implement this method recursively.
    Fill in all the missing portions.
    **********************************/

    //Base case: a number < 2 is not prime
    if(/*fill in condition*/ true)
        return false;

    //Base case: 2 is prime
    if (/*fill in condition*/ true)
        return true;

    //If number is divisable by i, it is not prime
    if (/*fill in condition*/ true)
        return false;

    //If i*i > number, then number must be prime
    if (/*fill in condition*/ true)
        return true;

    //If all case have passed, then call isPrime with a higher i value
    return isPrime(i+1);
}

bool Analyzer::isFibonacci(int a, int b){
    /**********************************
    This method should return true if number is in
    the Fibonacci Sequience (0, 1, 1, 2, 3, 5, 8, 13...)

    We are goig to implement this method recursively.
    Fill in all the missing portions.
    **********************************/

    //Base case: if b > number, then number is not a fibonacci
    if (/*fill in condition*/ true)
        return false;
    //Base case: if b is the same as number, then number is a fibonacci
    if (/*fill in condition*/ true)
        return true;
    //If all cases have passed
    return isFibonacci(b, a+b);
}

bool Analyzer::isBiggerThan4(){
    /**********************************
    This method should return true if number is bigger than
    the number 4.
    **********************************/

    if (/*fill in this condition*/ true)
        return true;
    else
        return false;

}

bool Analyzer::isEven(){
    /**********************************
    This method should return true if number is even.
    **********************************/

    return ((number.getNumber() %2) == /*fill in an integer value here*/ 10 );
}
