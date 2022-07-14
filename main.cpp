#include <iostream>
using namespace std;

struct Rectangle
{
  //data numbers
  int length;
  int width;

};
int area( Rectangle r){
  int result = r.length * r.width;
  return result;
}
int main()
{
  int yardArea, houseArea, lawnArea;

  Rectangle yard;
  Rectangle house;

  /*
  yard={length, width} yard, length;
  */

  cout << "Input yard length:";
  cin >> yard.length;
  cout << "Input yard width:";
  cin >> yard.width;

  cout << "Input house length:";
  cin >> house.length;
  cout << "Input house width:";
  cin >> house.width;

  yardArea = area(yard);houseArea = area(house);
  lawnArea = yardArea - houseArea;

  cout << "Lawn Area:" << lawnArea << endl;

  

  return 0;
}