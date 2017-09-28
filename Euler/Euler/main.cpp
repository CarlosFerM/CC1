#include <iostream>
#include <string>
using namespace std;
int main()
{
     int a = 1, b = 2, fib = 0, resp = 2;
     while (a+b < 4000000){
          fib = a+b;
          if (fib % 2 == 0) {resp += fib;}
          a = b;
          b = fib;
     }
     cout << endl << "la suma fibonacci es:  " << resp << endl;
     return 0;
}

using namespace std;
bool calcular(int num, int n) {
    if (n == 0) {
        return true;
    }
    return (num % n != 0) ? false : calcular(num,n-1);
}

int main() {
    int num = 20;
    int resultado = num;
    while (!calcular(resultado, num)) {
        resultado += num;
    }
    std::cout << resultado << '\n';
}


using namespace std;
void multiples(int num)
{
    int sum=0;
    for(int x=0; x<num;x++)
    {
        if(x%3==0)
        {
            sum=sum+x;
        }
        else if(x%5==0)
        {
            sum=sum+x;
        }
    }
    cout<<"la suma es: "<<sum;

}
int main()
{
  int number=1000;
  multiples(number);

}
