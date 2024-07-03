#include <iostream>
#include <locale>

struct  Data {

	static int Contador;
	int id;

	int Dia;
	int Mes;
	int Ano;

	
	Data() {
		id = Contador++;
		std::cout << "\nConstrutor de Data(" << id << ") executado\n "; 
	}
	
	~Data() {std::cout << "\nDestrutor de ~Data(" << id << ") executado\n ";}
};


int Data::Contador = 1;
	
int main() {
	{
		setlocale(LC_ALL, "portuguese");

		Data Agenda1; 
		{
			Data Agenda2;
			Data* Agenda3 = new Data; std::cout << "Criado na HEAP AGENDA 3 ";
			delete(Agenda3); std::cout << "Destrutor AGENDA 3 na HEAP ";
		}
		Data Agenda4;
	}

	return 0;
}