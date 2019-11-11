#include <iostream>

#include <cmath>

using namespace std;

void mayor(int n){

    int vector[100],mayor = 0;

    for(int i = 0; i<n; i++){

        cout<<i+1<<" numero: ";

        cin>>vector[i];

        if(vector[i]>mayor)

            mayor = vector[i];

    }

    cout<<"el mayor es: "<<mayor;

}

int main()

{

    int n;

    cout<<"cuantos elementos desea ingresar? ";

    cin>>n;

    mayor(n);



    return 0;

}
