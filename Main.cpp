#include <iostream>

using namespace std;

int main(){
    string nombre;
    
    cout<<"INGRESE SU NOMBRE "<<endl;

    cin>>nombre;

    if (nombre != "" || nombre != " "){
        
        cout<<"Hola "<<nombre<<endl;

        
    }else{
        
        cout <<"HOLA MUNDO"<<endl;
        
    }

    
}
