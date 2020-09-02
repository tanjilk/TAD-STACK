#include <iostream>

using namespace std;

class Pilha{

private:
    int *vet;
    int max_len;
    int topo;

public:
    Pilha(){
        vet = new int[100];
        max_len = 99;
        topo = -1;
    };

    ~Pilha(){
        delete[] vet;
    };

    void empilhar(int e){
        if(topo == max_len){
            std::cout << "Pilha Cheia!" << std::endl;
        }
        else {
            vet[++topo] = e;
        }
    }
    void desempilhar(){
        if(topo == -1){
            std::cout << "Pilha Vazia!" << std::endl;
        } else {
            topo--;
        }
    }

    int getTopo(){
        return vet[topo];
    }

    int vazia(){
        return (topo == -1);
    }

};

int main()
{
    Pilha p;
    p.empilhar(10);
    p.empilhar(20);
    p.empilhar(30);
    p.empilhar(40);
    p.desempilhar();
    std::cout << "A pilha está vazia?: " << p.vazia() << std::endl;
    std::cout << "Topo: " << p.getTopo() << std::endl;
    return 0;
}
