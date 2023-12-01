#include <iostream>
using namespace std;

int main(){
    int coluna, linha;
    cout << "Insira o numero de colunas de A: ";
    cin >> coluna;
    cout << "Insira o numero de linhas de A: ";
    cin >> linha;
    linha += 1;
    double Ab[coluna][linha], pivo, m;
    cout << "Insira os valores de A | b" << endl;
    for(int i = 0; i < coluna; i++){
        for(int j = 0; j < linha; j++){
            cin >> Ab[i][j];
        }
    }
    for(int k = 0; k < coluna; k++){
        if(Ab[k][k] != 0)
        pivo = Ab[k][k];
        for(int j = 0; j < linha; j++){
            Ab[k][j] = Ab[k][j]/pivo;
        }
        for(int i = 0; i < coluna; i++){
            if(k != i){
                if(Ab[i][k] != 0){
                    m = Ab[i][k];
                    for(int j = 0; j < linha; j++){
                        Ab[i][j] = Ab[i][j] - (m*Ab[k][j]);                 
                    }
                }
            }
        }
    }
    int j;
    cout << "Matriz Final: " << endl;
     for(int i = 0; i < coluna; i++){
        for(j = 0; j < linha - 1; j++){
            cout << Ab[i][j] << " ";
        }
        cout << endl;
    }
    j = linha - 1;
    cout << "Resultados finais: "  << endl;
    for(int i = 0; i < coluna; i++){
        cout << Ab[i][j] << endl;
    }
    return 0;
}
