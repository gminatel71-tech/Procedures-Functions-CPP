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

// Procedimentos para calculos
void adicao() {
	cout << "-----------------------" << endl;
	cout << " Operacao de Adicao" << endl;
	cout << "-----------------------" << endl;
	entrada();
	R = A + B;
	saida();
}
void subtracao() {
	cout << "-----------------------" << endl;
	cout << " Operacao de Subtracao" << endl;
	cout << "-----------------------" << endl;
	entrada();
	R = A - B;
	saida();
}
void multiplicacao() {
	cout << "-----------------------" << endl;
	cout << " Operacao de Multiplicacao" << endl;
	cout << "-----------------------" << endl;
	entrada();
	R = A * B;
	saida();
}
void divisao() {
	cout << "-----------------------" << endl;
	cout << " Operacao de Divisao" << endl;
	cout << "-----------------------" << endl;
	entrada();
	if(B == 0) {
		cout << "Nao e possivel dividir por 0" << endl;
		pausa();
	} else {
		R = A / B;
		saida();
	}
}

void Menu() {
	limpatela();
	cout << "\n ---------------------";
	cout << "\n Programa Calculadora";
	cout << "\n    Menu de Opcoes";
	cout << "\n ---------------------";
	cout << endl;
	cout << "[1] - Adicao" << endl;
	cout << "[2] - Subtracao" << endl;
	cout << "[3] - Multiplicacao" << endl;
	cout << "[4] - Divisao" << endl;
	cout << "[5] - Encerrar Programa" << endl;
	cout << "- Digite aqui: ";
	cin >> opcao;
}

//
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
	opcao = 0;
	
	while(opcao != 5) {
		Menu();
		if (opcao != 5) {
			limpatela();
			switch (opcao){
				case 1:
					adicao();
					break;
				case 2:
					subtracao();
					break;
				case 3:
					multiplicacao();
					break;
				case 4:
					divisao();
					break;
			}
		}
	}

    return 0;
}


