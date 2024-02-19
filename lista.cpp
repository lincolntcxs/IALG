#include <iostream>

using namespace std;

typedef int Dado;

class noh {
    friend class lista;
    private:
        const Dado dado;
        noh* proximo;
    public:
        noh(Dado d = 0);
};

noh::noh(Dado d) : dado(d) {
    proximo = NULL;
}

class lista {
    private:
        noh* primeiro;
        noh* ultimo;
        int tamanho;
    public:
        lista();
        ~lista();
        void insere(Dado dado);
        void insere(Dado dado, int pos);
        void remove(int posicao);
        int procura(Dado valor);
        void imprime();
        inline bool vazia();
};

// constrÃ³i uma lista inicialmente vazia
lista::lista() {
    tamanho = 0;
    primeiro = NULL;
    ultimo = NULL;
}

lista::~lista() {
    noh* iter = primeiro;
    noh* proximo = NULL;
    while (iter != NULL) {
        proximo = iter->proximo;
        delete iter;
        iter = proximo;
    }
}

// mÃ©todo bÃ¡sico que *percorre* a lista, imprimindo seus elementos
void lista::imprime() {
    noh* aux = primeiro;
    while (aux != NULL) {
        cout << aux->dado << " ";
        aux = aux->proximo;
    }
    cout << endl;
}

// insere por padrÃ£o no final da lista
void lista::insere(Dado dado) {
    // Implemente aqui
    if (vazia())
	{
		noh* novo = new noh(dado);
		primeiro = novo;
		ultimo = novo;
	}else
	{
		noh* novo = new noh(dado);
		ultimo->proximo = novo;
		ultimo = novo;
	}
	tamanho++;
}

// insere um dado em uma determinada posiÃ§Ã£o da lista
void lista::insere(Dado dado, int posicao) {
    // Implemente aqui
    if (posicao >= 0 and posicao <= tamanho)
	{
		if (vazia())
		{
			noh* novo = new noh(dado);
			primeiro = novo;
			ultimo = novo;
		}else if (posicao == 0)
		{
			noh* novo = new noh(dado);
			primeiro->proximo = novo;
			primeiro = novo;
		}else if (posicao == tamanho and tamanho != 0)
		{
			noh* novo = new noh(dado);
			ultimo->proximo = novo;
			ultimo = novo;
		}else
		{
			int cont = 0;
			noh* aux = primeiro;
			while (cont < posicao - 1)
			{
				aux = aux->proximo;
				cont++;
			}
			noh* novo = new noh(dado);
			novo->proximo = aux->proximo;
			aux->proximo = novo;
		}
		tamanho++;
	}
}

// remove o item da posiÃ§Ã£o passada por parÃ¢metro
// AtenÃ§Ã£o - o cÃ³digo deve tratar de posiÃ§Ã£o invÃ¡lidas
void lista::remove(int posicao) {
    // Implemente aqui
    if (posicao >= 0 and posicao < tamanho)
	{
		if (posicao == 0)
		{
			noh* temp = primeiro;
			primeiro = primeiro ->proximo;
			delete temp;
		}else if (posicao == tamanho - 1)
	{
		noh* aux = primeiro;
		noh* temp; 
		for (int i = 0; i < tamanho -2; i++)
		{
			aux = aux->proximo;
		}
		temp = aux->proximo;
		ultimo = aux;
		ultimo->proximo = NULL;
		delete temp;
	}else
	{
		noh* temp;
		noh* aux = primeiro;
		for (int i = 0; i < tamanho -1; i++)
		{
				aux = aux->proximo;
		}
		temp = aux->proximo;
		aux-> proximo = aux->proximo->proximo;
		delete temp;
	}
	tamanho--;
	}
}

// procura por um elemento e retorna a posiÃ§Ã£o ou -1 se nÃ£o encontrado
int lista::procura(Dado valor) {
    // Implemente aqui
    int cont = 0;
    noh* aux = primeiro;
    while (aux != NULL)
	{
		if (aux->dado == valor)
		{
			return cont;
		}
		aux = aux->proximo;
		cont++;
	}
	return -1;
}

// verifica se a lista estÃ¡ vazia
inline bool lista::vazia() {
    // Implemente aqui
    return (primeiro == NULL);
}

int main() { // NÃƒO MODIFIQUE!
    lista minhaLista;
    char opcao;
    int valor, pos;
    cin >> opcao;
    while (opcao != 'Q') {
        switch(opcao) {
            case 'I':
                cin >> valor;
                minhaLista.insere(valor);
                break;
            case 'W':
                cin >> valor;
                cin >> pos;
                minhaLista.insere(valor, pos);
                break;
            case 'P':
                cin >> valor;
                cout << minhaLista.procura(valor) << endl;
                break;
            case 'R':
                cin >> pos;
                minhaLista.remove(pos);
                break;
            case 'V':
                cout << minhaLista.vazia() << endl;
                break;
        }
        cin >> opcao;
    }
    minhaLista.imprime();
    return 0;
}
