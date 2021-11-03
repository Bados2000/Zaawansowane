#include <iostream>

using namespace std;

int main()
{
    int a,b,x0;
    cout << "Podaj a -> ";
    cin >> a;
    if(a==0){
        cout << endl << " a nie moze byc zerem !!!!" <<endl;
        return 0;
    }
    cout << "Podaj b -> " ;
    cin >> b;


        x0=-b/a;
        if(b>=0)
        cout << "Miejsce zerowe funkcji "<<a<<"x"<<"+"<<b<<"  wynosi -> "<<x0;
        else
        cout << "Miejsce zerowe funkcji "<<a<<"x"<<"+("<<b<<")  wynosi -> "<<x0;
return 0;

}


