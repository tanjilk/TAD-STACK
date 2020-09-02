# Pilha em c++
![pilha](https://i.imgur.com/0bpE3ck.png)
## Construtor da Pilha
```cpp
Pilha(){
        vet = new int[100];
        max_len = 99;
        topo = -1;
    };
```

## Método Empilhar 

```cpp
void empilhar(int e){
        if(topo == max_len){
            std::cout << "Pilha Cheia!" << std::endl;
        }
        else {
            vet[++topo] = e;
        }
    }
```
 ## Método Desempilhar
 ```cpp
 void desempilhar(){
        if(topo == -1){
            std::cout << "Pilha Vazia!" << std::endl;
        } else {
            topo--;
        }
    }
```
