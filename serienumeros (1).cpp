#include <iostream>

using namespace std;

void serieDeNumeros(int a, int b){

    if(a<=b){

        cout<<a<<" ";

        serieDeNumeros(a+1, b);

    }

}

int main()

{

    int a,b;

    cout<<"Ingrese a: "<<endl;
    cin>>a;
    
    cout<<"Ingrese b: "<<endl;
    cin>>b;

    serieDeNumeros(a,b);

    return 0;

}
