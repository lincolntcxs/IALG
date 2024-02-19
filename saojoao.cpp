#include <iostream>
using namespace std;

struct comida {
		string nome;
		int qtd;
	};

struct pessoa{
		string nome;
		comida comidas [2];
};

int main () {
	int n, i, k=0,j, f, t, total=0, h;
	cin>>n;
	pessoa pessoas[n];
	string pratos[n*2]; //k controla posicao ocupada
	int tudo [n*2];
		
	
	//entrada de dados
	for (i = 0; i<n; i++){
		cin >> pessoas[i].nome;
		for (j=0; j<2; j++) {
			cin>>pessoas[i].comidas[j].nome;
			cin>>pessoas[i].comidas[j].qtd;
		}
	}
	
	//saÃ­da de dados
	/*cout<<endl;
	for (i = 0; i<n; i++){
		cout<< pessoas[i].nome<<"\t";
		for (j=0; j<2; j++) {
			cout<<pessoas[i].comidas[j].nome<<" ";
			cout<<pessoas[i].comidas[j].qtd<<"\t";
		}
		cout<<endl;
	}*/
	
	//busca
	string s;
	for (i=0; i<n; i++) {
		for (j=0; j<2;j++) {
			s=pessoas[i].comidas[j].nome;
			f=0;
			while (f<k and pratos[f]!=s){
				f=f+1;
			}
			if (f==k){//prato ainda nao estÃ¡ no vetor
				pratos[k]=s;	//insere prato no vetor
				
				
				for (h=0; h<n; h++){
					for (t=0; t<2;t++) { //buscar as ocorrencias do prato
									//usei outra variavel para nao mudar o j da linha 45

						if (pratos[k]==pessoas[h].comidas[t].nome) {
							total=total+pessoas[h].comidas[t].qtd;
						}
					}	
				}
				tudo[k]=total;
				total=0;
				k=k+1; // ja marca a proxima posicao livre
			}
		}
	}
	
	
	for (i=0; i<k; i++) {
		cout<<pratos[i]<<" "<<tudo[i]<<endl;
	}
	
	
}
	
