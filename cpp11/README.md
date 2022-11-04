This is using the eigen library (version 3.4.0)
To compile, use the -I \<path to eigen library\>
  

What is in my bashrc: 
  alias eigencompile='c++ -std=c++11 -stdlib=libc++ -I \<path to eigen library\>
  
  
In C++ 11, you have to have add the library <thread> at the beginning of the program to use threads. https://www.bogotobogo.com/cplusplus/C11/1_C11_creating_thread.php
  
  

