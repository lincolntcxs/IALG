#include <iostream>
#include <fstream>
using namespace std;

struct aluno {
	int mat;
	int nota;
};

void ler(aluno alunos[], int& tam){
	ifstream arq("notas.txt");
	int agi;
	int i = 0;
	int aux = 2;
	while (arq >> agi)
	{
		if (aux % 2 == 0)
		{
			alunos[i].mat = agi;
			aux ++;
		}else
		{
			alunos[i].nota = agi;
			i++;
			tam++;
			aux++;
		}
	
		
	}
}

void norma(aluno alunos[],int tam){
	int maior = alunos[0].nota;
	int zio = 0;
	for (int i = 0; i < tam; i++)
	{
		if (alunos[i].nota > maior)
		{
			maior = alunos[i].nota;
			zio = i;
		}
	}
	
	float bufu = ((float(100 - alunos[zio].nota)/alunos[zio].nota) + 1); 
	for (int i = 0; i < tam ; i++)
	{
		alunos[i].nota = alunos[i].nota * bufu; 
	}
	
}

void grava(aluno alunos [], int tam){
	ofstream arqui("notas.txt");
	for (int i = 0; i < tam; i++)
	{
		arqui << alunos[i].mat; 
		arqui << " " ;
		arqui << alunos[i].nota;
		arqui << endl;
	}
	
}

int main () {
	aluno alunos[100];
	int tam = 0;
	ler(alunos, tam);
	norma(alunos,tam);
	grava(alunos,tam);
	
	
	return 0;
}
	
