#include <iostream>

using namespace std;

struct Vetor{
    int * _data;//bloco de dados
    int _capacidade;//tamanho maximo do vetor
    int _size; //quantos elementos estao inseridos

    Vetor(int capacidade){
        this->_capacidade = capacidade;
        this->_size = 0;
//        this->data = (int*) malloc(capacidade * 4);//retorno lixo
        this->_data = new int[_capacidade];//retorno zerado
    }
    void push_back(int value){
        if(this->_size == this->_capacidade)
            return ;
            //this->reserve(2 * _capacitade);
        this->_data[this->_size] = value;
        this->_size += 1;
    }
    void pop_back(){
        if(this->_size == 0)
            return;
        this->_data[_size] = 0;
        this->_size -= 1;
    }

    //retornar a refencia à variavel dessa posicao
    int& at(int indice){
        return this->_data[indice];
    }
    int& front(){
        return this->_data[0];
    }
    int& back(){
        return this->_data[this->_size - 1];
    }
    int * begin(){
        return &this->_data[0];
    }
    int * end(){
        return &this->_data[this->_size];
    }
    int size(){
                return this->_size = _size;
        }
        int capacity(){
                return this->_capacidade = _capacidade;
        }
    void reserve(int capacity){
        int i, j = 0;
        Vetor original_data[capacity];
            while(i < capacity ){
                original_data.push_back(this->_data[i]);// salva o bloco antigo em algum lugar
                i++;
            }
            this->_data = new int[capacity];//pede uma novo bloco de dados
            this->_size = 0;

     }


};



int main(){

    Vetor pivet(5);
    pivet.push_back(4);//add ao vetor
    pivet.push_back(2);
    pivet.push_back(7);

    pivet.at(2);
    pivet.at(2) = 9;

    int x = 3;
    int y = 2;
    x = y;

    //lvalue & significa referencia
    int& a = x;//referencia a um inteiro


  return 0;

}


