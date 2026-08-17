#include <iostream>
#include <vector>
using namespace std;

// Protótipos
void cadastrar(float v[], int &qtd, float valor);
void imprimir(float v[], int qtd);
float calcular_media(float v[], int qtd);
int buscar(float v[], int qtd, float valor);
int excluir(float v[], int &qtd, float valor);
void obter_extremos(float v[], int qtd, float *min, float *max);
void aumentar_salarios(float v[], int qtd);

const int MAX = 100;

int main() {
    setlocale(LC_ALL, "Portuguese");
    float salarios[MAX];
    int quantidade = 0;
    int opcao;
    float valor;
    float min, max;
    do {
        system("cls");
        cout << "\n--- RH: SISTEMA DE SALÁRIOS ---\n";
        cout << "\n 1. Cadastrar Salário";
        cout << "\n 2. Imprimir Todos os Salários";
        cout << "\n 3. Exibir Média Salarial";
        cout << "\n 4. Buscar Salário";
        cout << "\n 5. Excluir Salário";
        cout << "\n 6. Exibir Maior e Menor Salário";
        cout << "\n 7. Aumentar Salários";
        cout << "\n 0. Sair";
        cout << "\n Escolha uma opção: ";
        cin >> opcao;
            switch(opcao) {
            case 1:
                cadastrar(salarios, quantidade, valor);
                break;
            case 2:
                imprimir(salarios, quantidade);
                break;
            case 3:
                calcular_media(salarios, quantidade);
                break;
            case 4:
                buscar(salarios, quantidade, valor);
                break;
            case 5:
                excluir(salarios, quantidade, valor);
                break;
            case 6:
                obter_extremos(salarios, quantidade, &min, &max);
                break;
            case 7:
                aumentar_salarios(salarios, quantidade);
                break;
            case 0:
                
                break;
            default:
                cout << "\n Opção inválida!";
                break;
            }
        
    } while (opcao != 0);
    
    cout << "Saiu do sistema. " << endl;
    return 0;
}

void cadastrar(float v[], int &qtd, float valor)
{
    system("cls");
    cout << "---- Cadastrar Salário ----\n";
    cout << "Informe um novo valor de salário [" << qtd+1 << "]: ";
    cin >> valor;
    v[qtd] = valor; 
    qtd++;
}
void imprimir(float v[], int qtd) 
{
    system("cls");
    cout << "Lista de salários: " << endl;
    for(int i = 0; i < qtd; i++) {
        cout << " [" << i << "] -> R$" << v[i];
        cout << endl;
    }
    cout << "Tecle <Enter> para voltar";
    system("pause>>null");
}

float calcular_media(float v[], int qtd) 
{
    system("cls");
    float soma = 0;
    for(int i = 0; i < qtd; i++) 
    {
        soma += v[i];    
    }
    float media = (float)soma / qtd;
    cout << "Média salarial: R$ ";
    return media;
}

int buscar(float v[], int qtd, float valor) 
{
    system("cls");
    cout << "Informe o valor de salário que buscas: ";
    cin >> valor;
    
    for(int i = 0; i < qtd; i++) {
        if(valor == v[i]) {
            cout << "Valor encontrado na posição: [" << i << "] ";
            return i;    
        } 
    }
        cout << "Valor " << valor << " nao existe \n";
        cout << "Posicao: -1 \n";
    }
    return -1;
    
}

int excluir(float v[], int &qtd, float valor) 
{
    system("cls");
    cout << "Qual valor você deseja excluir da lista: ";
    cin >> valor;
    
    int iExcluir = -1;
    for(int i = 0; i < qtd; i++) {
        if(v[i] == valor) {
            iExcluir = i;
            break;
        }
    }
    
    if(iExcluir == -1) {
        cout << "Valor não existe na lista.";
        return 0;
    }
    
    for(int i = iExcluir; i < qtd - 1; i++) {
        v[i] = v[i + 1];
    }
    qtd--;
    
    cout << endl;
    
    cout << "Tecle <Enter> para voltar";
    system("pause>>null");
    return iExcluir;
}

void obter_extremos(float v[], int qtd, float *min, float *max) 
{
    system("cls");
    if(qtd == 0) {
        cout << "Nenhum salário cadastrados";
        return;
    }
    
    *max = v[0];
    *min = v[0];
    for(int i = 0; i < qtd; i++) 
    {
        if(v[i] > *max) {
            *max = v[i];
        }
        if(v[i] < *min) {
            *min = v[i];
        }
    }
    
    cout << "Maior salário: " << *max << endl;
    cout << "Menor salário: " << *min << endl;
    
    cout << "Tecle <Enter> para voltar";
    system("pause>>null");
}

void aumentar_salarios(float v[], int qtd) 
{
    system("cls");
    cout << "Lista de Aumento Salarial: " << endl;
    
    for(int i = 0; i < qtd; i++) 
    {
        if(v[i] <= 3000) { 
            v[i] += v[i] * 0.15; 
        } else if (v[i] > 3000 && v[i] >= 7000) {
            v[i] += v[i] * 0.10;
        } else {
            v[i] += v[i] * 0.05;
        }
    }
    for(int i = 0; i < qtd; i++) 
    {
        cout << "[" << i << "] -> R$"<< v[i] << "   ";     
    }
    
    cout << "Tecle <Enter> para voltar";
    system("pause>>null");
    cout << endl;
}



