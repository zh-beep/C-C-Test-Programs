#include <iostream>

int main(){
    std::cout << "hey" << std::endl;
    int x = 5; 
    int *y = &x;
    int foo [5] = {1,2,3,4,5};
    int *test = foo;
    std::cout << &foo << std::endl;
    std::cout <<test << std::endl;

}

//bool test(int*
