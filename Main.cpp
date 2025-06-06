#include <iostream>

using namespace std;

int main(){

    
    string NOMBRE;
    
    cout<<"Ingrese su nombre "<<endl;

    cin>>NOMBRE;

    if (NOMBRE != "" || NOMBRE != " "){
        
        cout<<"Hola "<<NOMBRE<<endl;
        
    }else{
        
        cout <<"HOLA MUNDO"<<endl;
    }

}
