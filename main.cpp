#include <iostream>

using namespace std;

int main()
{

    int a,b,x0;
    cout << "Podaj a -> ";
    cin >> a;
    cout << "Podaj b -> " ;
    cin >> b;
    if(a==0 && b==0){
        cout << "funkcja ma nieskonczenie wiele miejsc zerowych"<<endl;
        }
    else if(a==0 && b!=0 ){
        cout << " Funkcja nie ma miejsc zerowych"<<endl;
    }
    else{
        x0=-b/a;
        if(b>=0)
        cout << "Miejsce zerowe funkcji "<<a<<"x"<<"+"<<b<<"  wynosi -> "<<x0<<endl;
        else
        cout << "Miejsce zerowe funkcji "<<a<<"x"<<"+("<<b<<")  wynosi -> "<<x0<<endl;

    }
    return 0;
}


