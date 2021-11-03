#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a,b,c,delta,x1,x2,x;
    cout << "Podaj a ( Musi byc rozne od 0 ) -> ";
    cin >> a;
    if(a==0){
            cout<<"funkcja nie jest kwadratowa";
            return 0;
    }
    cout << "Podaj b  ->  " ;
    cin >> b;
    cout << "Podaj c -> " ;
    cin >> c;
    delta=(b*b)-(4*a*c);

    if(delta>0)
    {
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        cout<<"Wynik to :\nx1 = "<<x1<<"\nx2 = "<<x2;
    }
    if(delta==0)
    {
        x=-b/(2*a);
        cout<<"Wynik to : \n x = "<<x;
    }
    if(delta<0)
    {
    cout<<"Brak rozwiazan";
    }
    return 0;
}

