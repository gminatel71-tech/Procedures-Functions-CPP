#include <iostream>
using namespace std;

float R, A, B; // Variaveis Globais
int opcao;

// procedimentos auxiliares
void pausa() {
	cout << "\n \n Tecle <Enter> para voltar ao Menu de Opcoes ";
	system("pause>>null");
}

void limpatela() {
	system("cls");
}

void entrada() {
	cout << "Entre com o primeiro valor: ";
	cin >> A;
	cout << "Entre com o segundo valor: ";
	cin >> B;
}

void saida() {
	cout << "\n O resultado entre A e B = " << R;
	pausa();
}

// Procedimentos para c�lculos

void adicao() {
	cout << "-----------------------" << endl;
	cout << " Operacao de Adicao" << endl;
	cout << "-----------------------" << endl;
	entrada();
	R = A + B;
	saida();
}

void Menu() {
	limpatela();
	cout << "\n ---------------------";
	cout << "\n Programa Calculadora";
	cout << "\n    Menu de Opcoes";
	cout << "\n ---------------------";
	cout << endl;
	cout << "[1] - Adicao" << endl;
	cout << "[2] - Encerrar Programa" << endl;
	cin >> opcao;
}

//
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
	opcao = 0;
	
	while(opcao != 2) {
		Menu();
		if (opcao != 2) {
			limpatela();
			switch (opcao){
				case 1:
					adicao();
					break;
			}
		}
	}

    return 0;
}


