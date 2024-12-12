#include <iostream>
#include <string>

int main()
{


 int add_xy;
 int sub_xy;
 int x = 25;
 int y = 3;
 int z = 10;
 add_xy = x + y;
 sub_xy = x - y;

 std::cout << add_xy << std::endl << sub_xy << std::endl;
 
 bool x_greater_z = x > z;
 bool y_greater_x = y > x;
 std::cout << "x > z is " << (x > z) << std::endl
           << y_greater_x << std::endl;


  return 0;
}
