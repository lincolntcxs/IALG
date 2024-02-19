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

// constrói uma lista inicialmente vazia
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

// método básico que *percorre* a lista, imprimindo seus elementos
void lista::imprime() {
    noh* aux = primeiro;
    while (aux != NULL) {
        cout << aux->dado << " ";
        aux = aux->proximo;
    }
    cout << endl;
}

// insere por padrão no final da lista
void lista::insere(Dado dado) {
    // Implemente aqui
    noh* novo = new noh(dado);
    if (vazia())
    {
        ultimo = novo;
        primeiro = novo;
        tamanho++;
    }else
    {
        
        ultimo->proximo = novo;
        ultimo = novo;
        tamanho++;
    }
}

// insere um dado em uma determinada posição da lista
void lista::insere(Dado dado, int posicao) {
    // Implemente aqui
    noh* aux = primeiro;
    noh* novo = new noh(dado);
    noh* aux2 = NULL;
    if (posicao == 1)
	{
		aux2 = aux-> proximo;
		aux->proximo = novo;
		novo->proximo = aux2;
		tamanho++;
	}
	else
	{
    for (int i = 0; i < posicao - 1; i++)
    {
        aux = aux->proximo;
        aux2 = aux->proximo;
        tamanho++;
    }
 
    aux->proximo = novo;
    novo->proximo = aux2;
	}

    
}

// remove o item da posição passada por parâmetro
// Atenção - o código deve tratar de posição inválidas
void lista::remove(int posicao) {
    // Implemente aqui
    noh* aux = primeiro;
    noh* deletado = NULL;
    if (posicao == 1)
	{
		deletado = aux->proximo;
	}else
	{
    for (int i = 0; i < posicao - 1 ; i++)
	{
		aux = aux->proximo;
		deletado = aux->proximo;
	}
	}
	aux->proximo = deletado->proximo;
	delete deletado;
	tamanho--;
}

// procura por um elemento e retorna a posição ou -1 se não encontrado
int lista::procura(Dado valor) {
    // Implemente aqui
    noh* aux = primeiro;
    int pos = 0;
    while (aux != NULL and aux->dado != valor)
	{
		aux = aux->proximo;
		pos++;
	}
	return pos;
}

// verifica se a lista está vazia
inline bool lista::vazia() {
    // Implemente aqui
    return (primeiro == NULL);
}

int main() { // NÃO MODIFIQUE!
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

