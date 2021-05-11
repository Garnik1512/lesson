#include <iostream>
using namespace std;
int main ()
{int n;
cin >> n;
int num = 0;
int m = n;
while (m){
  num += m % 10;
  m /= 10;

}

{cout << num;
  return 0;}
}