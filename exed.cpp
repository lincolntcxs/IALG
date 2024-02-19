// Este programa Ã© uma implementaÃ§Ã£o mÃ­nima de Lista.
// Sem atributos tamanho e Ãºltimo, sem remoÃ§Ã£o, sem alteraÃ§Ã£o, etc...
// Os mÃ©todos estÃ£o "na lista".

#include <iostream>

typedef int Dado;

// === DeclaraÃ§Ã£o do Noh ========
class Noh {
    friend class Lista;
    protected:
        Noh(Dado d, Noh* prox);
        Dado mDado;
        Noh* mPtProximo;
};

// === DeclaraÃ§Ã£o da Lista ======
class Lista {
    public:
        // Cria Lista vazia.
        Lista();
        // Desaloca memÃ³ria.
        ~Lista();
        // Insere um dado no fim da lista.
        void InserirNoFim(Dado dado);
        // Retorna um item da lista.
        Dado Item(unsigned pos);
        // Escreve todos os itens da lista.
        void Escrever(std::ostream& saida);
    protected:
        Noh* mPtPrimeiro;
};

using namespace std;

// === ImplementaÃ§Ã£o do Noh =====
Noh::Noh(Dado d, Noh* prox)
    : mDado(d), mPtProximo(prox) {
}

// === ImplementaÃ§Ã£o da Lista ===
Lista::Lista()
    : mPtPrimeiro(NULL) {
// constrÃ³i uma Lista inicialmente vazia
}

Lista::~Lista() {
    Noh* iter = mPtPrimeiro;
    Noh* proximo = NULL;
    while (iter != NULL) {
        proximo = iter->mPtProximo;
        delete iter;
        iter = proximo;
    }
}

void Lista::Escrever(ostream& saida) {
// mÃ©todo bÃ¡sico que *percorre* a Lista, imprimindo seus elementos
    saida << '[';
    Noh* ptNoh = mPtPrimeiro;
    if (ptNoh != NULL) {
        saida << ptNoh->mDado;
        ptNoh = ptNoh->mPtProximo;
    }
    while (ptNoh != NULL) {
        saida << ',' << ptNoh->mDado;
        ptNoh = ptNoh->mPtProximo;
    }
    saida << "]\n";
}

void Lista::InserirNoFim(Dado dado) {
// insere um dado no final da lista
	Noh* ptNoh = mPtPrimeiro;
	Noh* novo = new Noh(dado,NULL);
	if (mPtPrimeiro == NULL)
	{
		mPtPrimeiro = novo;
	}else
	{
	
	while (ptNoh->mPtProximo != NULL)
	{
		ptNoh = ptNoh->mPtProximo;
	}
	ptNoh->mPtProximo = novo;
	}
}

Dado Lista::Item(unsigned pos) {
// Retorna um dos itens da lista. Caso a posiÃ§Ã£o seja invÃ¡lida, escreve mensagem de erro
// na saÃ­da padrÃ£o e retorna um dado default.
	Noh* ptNoh = mPtPrimeiro;
	Noh* novo = mPtPrimeiro;
	unsigned int aux = 0;
	while (ptNoh->mPtProximo != NULL)
	{
		aux++;
		ptNoh = ptNoh->mPtProximo;
	}
	if (pos > aux)
	{
    cout << "Erro: posicao invalida!\n";
	}else
	{
		for (unsigned int i = 0; i < pos; i++)
		{
			novo = novo->mPtProximo;
		}
		
	}
	
    return Dado();
}

int main() {
    Lista lista;
    Dado valor;
    char opcao;
    int pos;
    cin >> opcao;
    while (opcao != 'f') {
        switch(opcao) {
            case 'i': // Inserir
                cin >> valor;
                lista.InserirNoFim(valor);
                lista.Escrever(cout);
                break;
            case 'p': // item na Posicao
                cin >> pos;
                cout << lista.Item(pos) << endl;
                break;
            default:
                cerr << "Erro: opcao invalida!\n";
        }
        cin >> opcao;
    }
    return 0;
}
