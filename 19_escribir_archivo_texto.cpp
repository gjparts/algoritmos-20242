#include<iostream>
#include<fstream>
using namespace std;
int main(){
	//escribir en archivo de texto
	fstream archivo;
	
	/*cuando abrimos un archivo para escritura, si el archivo
	no existe entonces es creado automaticamente.*/
	archivo.open("libro.txt", ios::out);
	/*las operaciones de escritura posibles son:
	ios::out	sobreescribe el archivo perdiendo lo que estaba antes (OUTPUT)
	ios::app	agrega contenido al final del archivo, no se pierde lo que ya estaba (APPEND)
	*/
	//siempre se valida si el archivo a escribir se pudo abrir
	if( archivo.is_open() ){
		//todo bien, escribimos algo en el archivo
		archivo << "HOLA UNAH" << endl;
		archivo << 4+6 << endl;
		double x = 3.1416;
		archivo << "El valor de PI es " << x << endl;
		archivo << "Gerardo\tPortillo\nSistemas" << endl;
		//importante: cerrar el archivo
		archivo.close();
	}
	else
		cout << "No se pudo abrir el archivo o no tiene permiso de escritura" << endl;
	
	return 876;
}






