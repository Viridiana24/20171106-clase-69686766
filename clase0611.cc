//Crescenciano Cuautle Coyotl
// 05 de Noviembre 2017

#include <iostream>
using namespace std;

int main (){
char variable;
cout<<"Escoge una opsión entre A,B,C,D,E"<<endl;
cin>>variable;
switch(variable) {
case 'A': cout<<"Excelente"<<endl;break;
case 'B': cout<<"Muy Bien"<<endl;break;
case 'C': cout<<"Bien"<<endl;break;
case 'D': cout<<"Pasaste"<<endl;break;
case 'E': cout<<"Intentalo nuevamente"<<endl;break;
default: cout<<"opsión no válida"<<endl;
}
return 0;
}
