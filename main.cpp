#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    double a,b,c,delta,x1,x2,x;
    cout << "Podaj a -> ";
    cin >> a;
    if(a==0){
    double a2,b2,x0;
    cout << "Podaj b -> ";
    cin >> a2;
    cout << "Podaj c -> " ;
    cin >> b2;
    if(a2==0 && b2==0){
        cout << "funkcja ma nieskonczenie wiele miejsc zerowych";
        return 0;
        }
    else if(a2==0 && b2!=0 ){
        cout << " Funkcja nie ma miejsc zerowych";
        return 0;
    }
    else{
        x0=-b2/a2;
        if(b2>=0){
        cout << "Miejsce zerowe funkcji "<<a2<<"x"<<"+"<<b2<<"  wynosi -> "<<x0;
        return 0;
        }
        else{
        cout << "Miejsce zerowe funkcji "<<a2<<"x"<<"+("<<b2<<")  wynosi -> "<<x0;
        return 0;
        }
    return 0;

    }
    }
    cout << "Podaj b  ->  " ;
    cin >> b;
    cout << "Podaj c -> " ;
    cin >> c;
    delta=(b*b)-(4*a*c); // Wyznaczenie wartoœci tzw.delty -- "b^2-4ac".


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
    cout<<"Brak rozwi¹zañ";
    }

    return 0;
}
