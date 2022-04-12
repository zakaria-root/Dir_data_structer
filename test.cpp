#include <iostream>


bool f(){
     std::string String  = "ziko@gmail.com";
    std::string String1  = "zakaria@gmail.com";
    return String == String1;
}
int main(int argc, char const *argv[])
{
  
    std::cout  << f()<< std::endl;
    return 0;
}
