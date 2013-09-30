
#ifndef TESTE_H
#define	TESTE_H

#include <iostream>
#include <string>
#include <fstream>
#include"InteressesTuristicos.h"
#include"ViasLigacao.h"
#include"HistoricoCulturais.h"
#include"Naturais.h"
#include"Nacionais.h"
#include"AutoEstrada.h"
using namespace std;

class Teste
{
private:
	//Cabeçalho e rodapé da aplicação
    void header();
    void bottom();
	//vectores dinâmicos e varáveis de controle
	//Interesses Turisticos (IT)
	InteressesTuristicos * * vecIT;
	int tamanhoIT;
	int actualIT;
	//Vias de Ligação (VL)
	ViasLigacao * * vecVL;
	int tamanhoVL;
	int actualVL;
	//Métodos de controle dos vectores
	void reSizeIT();
	/*void reSizeVL();*/
	void destroy();
	void menu();

public:
	//Construtor e destrutor
    Teste();
    ~Teste();
	// método de teste
    void Run();
	//Método inserir Interesse Turistico
	void  inserirIT(InteressesTuristicos * it);
	//Método inserir Vias de Ligação
	/*void  inserirVL(const ViasLigacao * vl);*/
	//método carregar fich
	void LerFich1(string fich1);
};


//Cabeçalho e rodapé da Aplicação
void Teste::header(){
  
	cout << "  88b           d88                                          " << endl;
	cout << "  888b         d888                                          " << endl;
	cout << "  88`8b       d8'88                                          " << endl;
	cout << "  88 `8b     d8' 88  ,adPPYYba,  8b,dPPYba,   ,adPPYYba,     " << endl;
	cout << "  88  `8b   d8'  88  ´´     `Y8  88P'    ´8a  ´´     `Y8     " << endl;
	cout << "  88   `8b d8'   88  ,adPPPPP88  88       d8  ,adPPPPP88     " << endl;
	cout << "  88    `888'    88  88,    ,88  88b,   ,a8´  88,    ,88     " << endl;
	cout << "  88     `8'     88  `´8bbdP´Y8  88`YbbdP´'   `´8bbdP´Y8     " << endl;
	cout << "                                 88                          " << endl;
	cout << "                                 88                          " << endl;

	cout << "                                                             " << endl;
	cout << "                                                             " << endl;

	cout << " 88888888ba,    88               88                       88" << endl;
	cout << " 88      `´8b   ´´               ´´    ,d                 88" << endl;
	cout << " 88        `8b                         88                 88" << endl;
	cout << " 88         88  88   ,adPPYb,d8  88  MM88MMM  ,adPPYYba,  88" << endl;
	cout << " 88         88  88  a8´    `Y88  88    88     ´´     `Y8  88" << endl;
	cout << " 88         8P  88  8b       88  88    88     ,adPPPPP88  88" << endl;
	cout << " 88      .a8P   88  ´8a,   ,d88  88    88,    88,    ,88  88" << endl;
	cout << " 88888888Y´'    88   `´YbbdP´Y8  88    ´Y888  `´8bbdP´Y8  88" << endl;
	cout << "                     aa,    ,88                             " << endl;
	cout << "                      ´Y8bbdP´                              " << endl;
	cout << "                                                             " << endl;
	cout << "                                                             " << endl;
	cout << "                                                             " << endl;
	cout << "............................................................." << endl;
}

void Teste::bottom(){
	cout<<"                                                               "<<endl;
	cout<<"                                                               "<<endl;
    cout<<"==============================================================="<<endl;
	cout<<"         Instituto Superior de Engenharia do Porto             "<<endl;
    cout<<"                                                               "<<endl;
	cout<<"Diogo Fraga                                                    "<<endl;
	cout<<"Ia Mendes                                                      "<<endl;
	cout<<"                                                               "<<endl;
	cout<<"                                                               "<<endl;
    cout<<"2013/2014                                                  v0.2"<<endl;
    cout<<"==============================================================="<<endl;
}
//construtor e destrutor
Teste::Teste()
{
	vecIT = new InteressesTuristicos*[10];
	vecVL = new ViasLigacao*[10];
	tamanhoIT = 10;
	actualIT = 0;
	tamanhoVL = 10;
	actualVL = 0;

}
Teste::~Teste()
{
	destroy();
}
//metodos de controle dos vectores dinâmicos
void Teste::destroy()
{
	for (int i = 0; i < actualIT; i++)
	{
		delete vecIT[i];
	}
	/*
	for (int i = 1; i < actualVL; i++)
	{
		delete vecVL[i];
	}
	delete [] vecVL;*/
	delete [] vecIT;
}

void Teste::reSizeIT()
{
	if (actualIT == tamanhoIT)
	{
		tamanhoIT = tamanhoIT * 2;
		InteressesTuristicos * * temp = new InteressesTuristicos * [tamanhoIT];
		for (int i = 0; i < tamanhoIT; i++)
		{
			temp[i] = vecIT[i];
		}
		delete[] vecIT;
		vecIT = temp;
	}

}

/*void Teste::reSizeVL()
{
	if (actualVL == tamanhoVL)
	{
		tamanhoVL = tamanhoVL * 2;
		ViasLigacao * * temp = new ViasLigacao *[tamanhoVL];
		for (int i = 0; i < tamanhoVL; i++)
		{
			temp[i] = vecVL[i];
		}
		delete[] vecVL;
		vecVL = temp;
	}

}*/

//metódo para testar a classe
void Teste::Run()
{
	menu();
	/*
   //cabeçalho
   header();
   //ler fcheiro 1
   LerFich1("locaisInteresse.txt");
   //escrever vector dinamico de interesses turisticos
   for (int i = 0; i < actualIT; i++)
   {
	   cout << "                                                             " << endl;
	   cout << "                      Interesse Turistico                    " << endl;
	   cout << "                                                             " << endl;
	   cout <<vecIT[i] << endl;
	  
   }
   
   for (int j = 0; j < actualVL; j++)
	   cout << "VL" <<endl<<vecVL[j]<<endl;

   //rodapé
	bottom(); */
}
void Teste::menu()
{
	int opcao;
	do
	{
		
		header();
		cout << "\n                             Menu :               " << endl;
		cout << "\n                   1--> Carregar Ficheiros        " << endl;
		cout << "\n                   0--> Sair                      " << endl;
		bottom();
		cin >> opcao;
		cin.ignore();//Sem este ignore o cin.get() simplesmente não funciona pois o cin em cima passa um \n para o cin.get() tirando o efeito do mesmo
		switch (opcao)
		{
		case 1:
			{
				system("CLS");//Clear Screen
				//cabeçalho
				header();
				//ler fcheiro 1
				LerFich1("locaisInteresse.txt");
				//escrever vector dinamico de interesses turisticos
				for (int i = 0; i < actualIT; i++)
				{
					cout << "                                                             " << endl;
					cout << "                      Interesse Turistico                    " << endl;
					cout << "                                                             " << endl;
					cout << vecIT[i] << endl;

				}
				/*
				for (int j = 0; j < actualVL; j++)
				cout << "VL" <<endl<<vecVL[j]<<endl;*/

				//rodapé
				bottom();
				cin.get();
				system("CLS");//Clear Screen
			  }
		case 0:
			{
				break;
			  }
		default:
			break;
		}
	} while (opcao != 0);
}
//Método inserir Interesse Turistico
void  Teste::inserirIT(InteressesTuristicos * it)
{
	reSizeIT();
	vecIT[actualIT] = it->clone();
	actualIT++;

}
//Método inserir Vias de Ligação
/*void  Teste::inserirVL(const ViasLigacao * vl)
{
	reSizeVL();
	vecVL[actualVL] = vl->clone();
	actualVL++;
}*/
//método carregar fich
void Teste::LerFich1(string fich1)
{
	string line;
	ifstream file(fich1);
	if (file.is_open())
	{
		while (!file.eof())
		{
			getline(file, line);
			if (line.size() > 1){
				int inic = 0;
				int pos = line.find(',', inic);
				string primeiro(line.substr(inic, pos - inic));
				pos++;
				inic = pos;
				pos = line.find(',', inic);
				string segundo(line.substr(inic, pos - inic));
				pos++;
				inic = pos;
				pos = line.find(',', inic);
				string terceiro(line.substr(inic, pos - inic));
				pos++;
				inic = pos;
				pos = line.find(',', inic);
				string quarto(line.substr(inic, pos - inic));
				float t2, t3, t4;
				t2 = atof(segundo.c_str());
				t3 = atof(terceiro.c_str());
				t4 = atof(quarto.c_str());
				if (t3 == 0)
				{
					int ti2 = atoi(segundo.c_str());
					Naturais*nf = new Naturais(primeiro, ti2);
					inserirIT(nf);
				}
				else
				{
					HistoricoCulturais*hcf = new HistoricoCulturais(primeiro, t2, t3, t4);
					inserirIT(hcf);
				}				
			}
		}
		file.close();
	}
	else cout << "Unable to open file";
}
#endif	/* TESTE_H */

