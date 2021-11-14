#include <iostream>
#include <math.h>

using namespace std;
void kw(){
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
        }
    else if(a2==0 && b2!=0 ){
        cout << " Funkcja nie ma miejsc zerowych";
    }
    else{
        x0=-b2/a2;
        if(b2>=0){
        cout << "Miejsce zerowe funkcji "<<a2<<"x"<<"+"<<b2<<"  wynosi -> "<<x0;
        }
        else{
        cout << "Miejsce zerowe funkcji "<<a2<<"x"<<"+("<<b2<<")  wynosi -> "<<x0;
        }
    }
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
}
void liniowa(){
int a,b,x0;
    cout << "Podaj a -> ";
    cin >> a;
    cout << "Podaj b -> " ;
    cin >> b;
    if(a==0 && b==0){
        cout << "funkcja ma nieskonczenie wiele miejsc zerowych";
        }
    else if(a==0 && b!=0 ){
        cout << " Funkcja nie ma miejsc zerowych";
    }
    else{
        x0=-b/a;
        if(b>=0)
        cout << "Miejsce zerowe funkcji "<<a<<"x"<<"+"<<b<<"  wynosi -> "<<x0;
        else
        cout << "Miejsce zerowe funkcji "<<a<<"x"<<"+("<<b<<")  wynosi -> "<<x0;

    }
}

void kwkan(){
double a,b,c,p,q,delta,x1,x2,x;
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
        }
    else if(a2==0 && b2!=0 ){
        cout << " Funkcja nie ma miejsc zerowych";
    }
    else{
        x0=-b2/a2;
        if(b2>=0){
        cout << "Miejsce zerowe funkcji "<<a2<<"x"<<"+"<<b2<<"  wynosi -> "<<x0;
        }
        else{
        cout << "Miejsce zerowe funkcji "<<a2<<"x"<<"+("<<b2<<")  wynosi -> "<<x0;
        }
    }
    }
    else{
    cout << "Podaj p -> ";
    cin >> p;
    cout << "Podaj q -> " ;
    cin >> q;
    b=-2*a*p;
    c=a*p*p+q;
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
    }
}

void zamianaOI(){
    double a,b,c,x1,x2,delta;
    cout << "Podaj funkcje kwadratowa w postaci ogolnej f(x)=ax^2+bx+c"<<endl;
    cout << "Podaj a ->";
    cin >> a;
    cout << "Podaj b ->";
    cin >> b;
    cout << "Podaj c ->";
    cin >> c;
    delta=(b*b)-(4*a*c);
    if ( delta > 0){
    x1=(-b-sqrt(delta))/(2*a);
    x2=(-b+sqrt(delta))/(2*a);
    cout << "Funkcja po przeksztalceniu na postaæ iloczynowa --> f(x)=a(x-"<<x1<<")( x-"<<x2<<")";
    }
    else if(delta == 0) {
        x1=-b/2*a;
        cout << "Funkcja po przeksztalceniu na postaæ iloczynowa --> f(x)=a(x-"<<x1<<")^2";
    }
    else
        cout <<"Delta jest mniejsza od zera, brak mozliwosci zamiany na postac iloczynowa";
}

void zamianaIO(){
    double a,b,c,x1,x2,delta;
    cout << "Podaj funkcje kwadratowa w postaci iloczynowej f(x)=a(x-x1)(x-x2)"<<endl;
    cout << "Podaj a ->";
    cin >> a;
    cout << "Podaj x1 ->";
    cin >> x1;
    cout << "Podaj x2 ->";
    cin >> x2;
    b=-a*(x1+x2);
    c=a*x1*x2;

    cout << "Funkcja po przeksztalceniu na postac ogolona --> f(x)="<<a<<"x^2+"<<b<<"x+"<<c;
    }

int main()
{

    int liczba;
    cout << "----------------Menu wyboru funkcji----------------"<<endl;
    cout << "1 --- Obliczanie miejsc zerowych funkcji liniowej"<<endl;
    cout << "2 --- Obliczanie miejsc zerowych funkcji kwadratowej(Postac ogolna)"<<endl;
    cout << "3 --- Obliczanie miejsc zerowych funkcji kwadratowej(Postac kanoniczna)"<<endl;
    cout << "4 --- Zamiania postaci funkcji kwadratowej z ogólnej na iloczynow¹"<<endl;
    cout << "Podaj nr operacji ktora chcesz wykonac --> ";

    do
    {

        std::cin >> liczba;
        switch( liczba )
        {
        case 1:
            liniowa();
            break;
        case 2:
            kw();
            break;
        case 3:
            kwkan();
            break;
        case 4:
            zamianaOI();
            break;
        case 5:
            zamianaIO();
            break;
        }
    } while( liczba != 0 );

}
