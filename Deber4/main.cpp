#include <iostream>

using namespace std;

int main() {
	int dJ=70;
	int dA=150;
	int iT=40;
	
	
	int dnJ = dJ + iT;
	cout <<"Juan recorriendo 40Km mas en direccion Quito-Atacames la distancia es de "<< + dnJ<< " Km"<<endl;
	cout<<"\n";
	int dnA = dA - iT;
    cout <<"El amigo recorriendo 40Km mas en direccion Atacames-Quito la distancia es de "<< + dnA<< " Km"<<endl;
    cout <<"\n";
	cout <<"Ambos con la misma velocidad"<<endl;
	cout <<"\n";
	if (dnJ == dnA){
		
		cout<<"En el Km "<< + dnJ << " de la carretera (Quito-Atacames) se encontraron los amigos"<<endl;
		
	} else{
		
		cout<<"Aun no se encuentran "<<endl;
	} 
	 
	 return 0;
		
	}
	
	
		
		
		
		
		
