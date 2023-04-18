// VideoYouTubeVectorDeObjetos.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <vector>

using namespace std;

class Worker {

public:

    string name;
    double salario;

    Worker(string n, double sal) {
        name = n;
        salario = sal;
    }

};

int main()
{
    vector <Worker> wk;
  
    int i;

    string name;
    double salario;

    cout << " Work Menager 3.0" << endl;

    cout << endl;

    for (i = 0; i < 2; i++)
    {
        cout << "Digite o nome do colaborador: ";
        cin >> name;
        cout << endl;
        cout << " Digite o salario do colaborador: ";
        cin >> salario;
        cout << endl;

        Worker* p1 = new Worker(name, salario);
        wk.push_back(*p1);
    }

        for (i = 0; i < wk.size(); i++)
        {
            cout << "INFORMACOES" << "\n\n";

            cout << " Nome do colaborador do contarto: " << wk[i].name << endl;
            cout << " Salario: " << wk[i].salario << endl;
            cout << endl;
        }

       






    

    

}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
