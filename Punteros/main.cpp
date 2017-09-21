#include <iostream>

using namespace std;

void swap(int&a , int&b)
{
    int temp = a;
    a= b;
    b= temp;
}
  /*int main(){
      int x=2;
      int y=3;
      swap(x,y);
      cout<<x<<" "<<y<<endl;
      return 0;
}*/

/*int main(){
    char x='a';
    char*p_x=&x;
    cout<<*p_x<<endl;
    cout<<p_x<<endl;
}*/

int main(){
    int a[4]={11,12,13,14};
    int x,y;
    int *pa;
    pa = &a[0];
    x = *pa;
    y = *(pa + 2);
    y = y+3;
    cout<<("%d %d %d %d" , *pa, x,y, a[2]);
    /*11,11,16,13*/
}

