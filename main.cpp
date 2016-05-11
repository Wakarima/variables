#include <iostream>
#include <string>

#include "tria.h"
#include "shape.h"




 using namespace std;
 
int main(){
    
    float base,height;
    
     Triangle tria(10,6);

 std::cout << tria.getName() << std::endl;

    
    cout<<"enter the base and height of the triangle";
    
    cin >> base >> height;
    
    cout<<"\nArea of triangle is"<<tria.area(base,height) <<endl;
}


