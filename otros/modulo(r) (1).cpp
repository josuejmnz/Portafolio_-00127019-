#include <iostream>

#include <string>

#include <cmath>

using namespace std;



struct complex{

    float real, imaginaria;

}z1;



void datos(){

    cout<<"digita los datos del complejo: "<<endl;

    cout<<"real: "; cin>>z1.real;

    cout<<"imaginaria: "; cin>>z1.imaginaria;

}



float absComplex(complex x){

    return sqrt(pow(x.real,2)+pow(x.imaginaria,2)); 

}





int main()

{

    datos();

    cout<<absComplex(z1);

    

}
