#include <iostream>
//colocar print da entrada e da saida
using namespace std;
int main(){
    int La, Lb, Ca, Cb;
    cout << "Insira o numero de colunas da matriz A: ";
    cin >> Ca;
    cout << "Insira o numero de linhas da matriz A: ";
    cin >> La;
    cout << "Insira o numero de colunas da matriz B: ";
    cin >> Cb;
    cout << "Insira o numero de linhas da matriz B: ";
    cin >> Lb;
    cout << "Insira os valores da Matriz A: " << endl;
    int A[Ca][La], B[Cb][Lb], C[Ca][Lb], soma[Ca][La];
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            C[i][j] = soma[i][j] = 0;
        }
    }
    for(int i = 0; i < Ca; i++){
        for(int j = 0; j < La; j++){
            cin >> A[i][j];
        }
    }
    cout << "Insira os valores da Matriz B: " << endl;
        for(int i = 0; i < Cb; i++){
            for(int j = 0; j < Lb; j++){
                cin >> B[i][j];
            }
        }
    if(La != Cb){
        cout << "Nao e possivel realizar as operacoes";
    } else{
        for(int i = 0; i < Ca; i++){
            for(int j = 0; j < Lb; j++){
                for(int k = 0; k < La; k++){
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        cout << "A matriz C do produto resultante e: " << endl;
        for(int i = 0; i < Ca; i++){
            for(int j = 0; j < Lb; j++){
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
        if(La == Lb && Ca == Cb){
            for(int i = 0; i < La; i++){
                for(int j = 0; j < Cb; j++){
                soma[i][j] = A[i][j] + B[i][j];
                }
            }
        cout << "A matriz resultante da soma e: " << endl; 
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    cout << soma[i][j] << " ";
                }
                cout << endl;
            }
        } else{
            cout << "Nao e possivel realizar a soma: ";
        }
    }
    return 0;
}