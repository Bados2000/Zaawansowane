#include <iostream>
using namespace std;

int main()
{
    double a,b,c,x0;
    cout << "Podaj A -> ";
    cin >> a;
    cout << "Podaj B -> " ;
    cin >> b;
    cout << "Podaj C -> " ;
    cin >> c;

    if(a==0 && b==0 ){
        cout << " Funkcja nie istnieje";
    }
    else if(b==0){
        cout << "Miejsce zerowe funkcji "<<a<<"x"<<b<<"y"<<"+"<<c<<"  wynosi -> " <<-c/a;
        }

    else if(a==0){
        cout << "Miejsce zerowe funkcji "<<a<<"x"<<"+("<<b<<")"<<"y"<<"+"<<c<<"  wynosi -> "<<-c/b;
    }
    else{
        x0=(c/-a);
        if(-c>=0)
            cout << "Miejsce zerowe funkcji "<<a<<"x"<<"+("<<b<<")"<<"y"<<"+"<<c<<"  wynosi -> "<<x0;
        else
            cout << "Miejsce zerowe funkcji "<<a<<"x"<<"+"<<b<<"y"<<"+"<<c<<"  wynosi -> "<<x0;
    }
    return 0;
}
