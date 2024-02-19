#include <iostream>
typedef int Dado; // para facilitar a troca de int para outro tipo
 
// pilha implementada em arranjo 

class noh{
	friend class pilhav;
	private:
	Dado dado;
	noh* prox;
};


class pilhav {
private:
	int capacidade;
	Dado *dados;
	int tamanho;
	int posTopo;
	noh* topo;
public:
	pilhav(int cap = 100);
        ~pilhav();
	void empilha(Dado valor);
	Dado desempilha();
	Dado espia(); // acessa elemento do topo, mas não retira
	void depura(); // imprime os dados do vetor da pilha sem removê-los (desempilhar)
	void info();  // imprime informações da pilha (tamanho e  posição do topo)
};

using namespace std;

pilhav::pilhav(int cap){
	tamanho = 0;
	capacidade = 20;
	posTopo = 0;
	topo = NULL;
}

pilhav::~pilhav(){
	while (topo != NULL)
	{
		desempilha();
	}
}

void pilhav::empilha(Dado valor){
	noh* temp = new noh;
	temp->dado = valor;
	temp->prox = topo;
	topo = temp;
	tamanho++;
	posTopo++;
}

Dado pilhav::desempilha(){
	Dado aux;
	noh* temp;
	temp = topo;
	aux = temp->dado;
	topo = temp->prox;
	delete temp;
	tamanho--;
	posTopo--;
	if (topo == NULL)
	{
		topo = NULL;
	}
	return aux;
}

Dado pilhav::espia(){
	if(topo != NULL){
	return topo->dado;
	}else
	{
		return -1;
	}
}

void pilhav::depura(){
	while (topo != NULL)
	{
		cout << topo->dado << " ";
		topo = topo->prox;
	}
}

void pilhav::info(){
	cout << tamanho << " " << posTopo << endl;
}

int main(){
	pilhav pilha;
	Dado valor;
	for (int i = 0; i < 5; i++)
	{
		cin >> valor;
		pilha.empilha(valor);
	}
	cout << pilha.desempilha() << " ";
	cout << pilha.desempilha() << " ";
	cout << pilha.desempilha() << endl;
	for (int i = 0; i < 4; i++)
	{
		cin >> valor;
		pilha.empilha(valor);
	}
	cout << pilha.desempilha() << " ";
	cout << pilha.desempilha() << " ";
	cout << pilha.desempilha() << endl;
	pilha.espia();
	cout << endl;
    pilha.depura();
    cout << endl;
    pilha.info();
	return 0;
}
