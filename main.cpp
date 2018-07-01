#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
void suma(int n, int m, vector <vector <float> >mat, vector <vector <float> >mat1){
    cout << endl;
    cout << "\t\t\t\t Suma" << endl;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            float num = mat[i][j]+mat1[i][j];
            cout << setprecision(5) << num << " ";
        }
        cout << endl;
    }
}

void resta(int n, int m, vector <vector <float> >mat, vector <vector <float> >mat1){
    cout << endl;
    cout << "\t\t\t\t resta" << endl;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            float num = mat[i][j]-mat1[i][j];
            cout << setprecision(5) << num << " ";
        }
        cout << endl;
    }
}
void multiplicacion(int n, int m, vector <vector <float> >mat, vector <vector <float> >mat1){
    cout << endl;
    cout << "\t\t\t\t Multiplicacion" << endl;
    float r = 0;
    for(int i = 0; i < m; i++){///columnas del primero
        for(int h = 0; h < n; h++){
            for(int j = 0; j < m;j++ ){ ///filas del primero
                r += mat[i][j] * mat1[j][h];
            }
            cout << setprecision(5) << r << " ";
            r = 0;
        }


        cout << endl;
    }
}

int main()
{
    int n, m, n1, m1;
    string s;
    string op;
    vector <vector <float> > mat;
    vector <vector <float> > mat1;
    do{
        cout << "Primera Matriz (Filas, Columnas):" << endl;
        cin >> n >> m;///m = columnas, n = filas
        mat = vector <vector <float> >(n, vector <float> (m));
        for(int i = 0; i < n;i++){
            for(int j = 0; j < m;j++){
                cin >> mat[i][j];
            }
        }

        cout << "Segunda Matriz (Filas, Columnas):" << endl;
        cin >> n1 >> m1;///m1 = columnas, n1 = filas
        mat1 = vector <vector <float> >(n1, vector <float> (m1));
        for(int i = 0; i < n1;i++){
            for(int j = 0; j < m1;j++){
                cin >> mat1[i][j];
            }
        }

        cout << endl;
        cout << "Operacion: ";
        cin >> op;
        if(op == "resta" || op == "r"){
            resta(n, m, mat, mat1);
        }
        else if(op == "suma" || op == "s"){
            suma(n, m, mat, mat1);
        }
        else if(op == "m"){
            multiplicacion(n, m, mat, mat1);
        }

        cout << endl;
        cout << "Again?: " << endl;
        cin >> s;

    }while(s == "s" || s == "S");

    return 0;
}
