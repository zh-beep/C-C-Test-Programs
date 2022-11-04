/* am following this tutorial: https://www.educative.io/blog/modern-multithreading-and-concurrency-in-cpp */

#include <iostream>
#include <stdio.h>
#include <thread>

void test_print(){
    std::cout << "ok" << std::endl;
}


void print(std::string & to_print){
    std::cout << to_print << std::endl;
}

int main(){

    std::string test = "hey";
    //print(test);
    std::thread t1(test_print);
    //std::thread t1(print,test); 
    //for some reason above function not working, something about passing in a void & 
    t1.join(); //this to make sure main doesn't stop running before t1 does
    
    return 0;
}
