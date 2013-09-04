#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int x,v[75];
    int *vec = new int[75];
    *vec= 5; //vec[0] = 5
    vec[1] = 8; //*(vec+1)
    vec[2] = 16;
    *(vec+3) = 5;
    vec[4] = 9;

cout <<"ROGRAMA DE ARREGLOS DINAMICOS Y ESTATICOS "<<endl;
    cout <<"cuantos valores deseas ingresar al arreglo  "<<endl;
    cin>>x;
    for (int i=0; i < x; i++) {
        cout <<"Valor: "<<i+1<<endl;
        cin>>v[i];
    }


    cout << " Vector Estatico"<<endl;
     for(int i=0; i < x; i++) {
         cout<<v[i]<<endl;

    }
    for (int i=0; i < x; i++) {
         *(vec+i)=v[i];

    }
    cout<< "Vector Dinamico "<< endl;
    for (int i=0; i< x; i++) {
         cout<<vec[i]<<endl;

    }
    return EXIT_SUCCESS;
}
