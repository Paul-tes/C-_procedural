/*this program is to compute matrix operations while a user create a matrix*/
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h> //for computing INT_MAX and INT_MIN
#define size 10
using namespace std;

int main(){
    float matrixA[size][size], matrixB[size][size], result[size][size];
    int row_A, columen_A,row_B, columen_B,chose;
    char get;
    bool error;

    do {
        system("clear");
        cout << endl << setw(15)<<""<< setw(50) << setfill('=') << " " << endl << setfill(' ');
        cout <<setw(30)<<"||" << "select yout Opreation " << "||\n";
        cout << setw(15)<<""<< setw(50) << setfill('=') << " " << endl << setfill(' ');
        cout << setw(30)<<"" <<"[1] create matrix\n";
        cout << setw(30)<<"" <<"[2] add matrix\n";
        cout << setw(30)<<"" <<"[3] subtruct matrix\n";
        cout << setw(30)<<"" <<"[4] multiply matrix\n";
        cout << setw(30)<<"" <<"[5] show matrix\n";
        cout << setw(30)<<"" <<"[6] exit\n";
        cout << endl << setw(15)<<""<< setw(50) << setfill('-') << " " << endl << setfill(' ');
        cout << setw(30)<<""<<"=>";
        cin >> chose;


        // under selection operation
        switch (chose){
            case 1: // create matrix
                // creating matrix[A]
                cout << "\nenter the matrix[A] row and columen";

                //validation matrix[A] row
                do {
                    cout << "\nmatrix[A] row = ";
                    cin >> row_A;
                    if (!(row_A > 0 && row_A < 10)){
                        cerr << "invalid row! row must be 0 - 100";
                    }
                }while(!(row_A > 0 && row_A < 10));
                //validation matrix[A] coulumn
                do {
                    cout << "matrix[A] columen = ";
                    cin >> columen_A;
                    if (!(columen_A > 0 && columen_A < 10)){
                        cerr << "invalid columen! columen must be 0 - 100\n";
                    }
                }while(!(columen_A > 0 && columen_A < 10));
                //inserting values of matrix[A] resepective to thier coumen and row
                cout << "row are should beter entered separated by space\n";
                for (int i = 0; i < row_A; i++){
                    for (int j = 0; j < columen_A; j++){
                        cin >> matrixA[i][j];
                    }
                }

                //printing matrix[A]
                for (int i = 0; i < row_A; i++){
                    cout << "|";
                    for (int j = 0; j < columen_A; j++){
                        cout << setw(5) << matrixA[i][j];
                    }
                    cout << "    |\n";
                }

                //create matrix[B]
                cout << "Enter the matrix[B] row and columen";
                //validation matrix[B] row
                do {
                    cout << "\nmatrix[B] row = ";
                    cin >> row_B;
                    if (!(row_B < 10, row_B > 0)){
                        cerr << "invalid row! row must be 0 - 100";
                    }
                }while(!(row_B < 10, row_B > 0));

                //validation matrix[B] coulumn
                do {
                    cout << "matrix[B] columen = ";
                    cin >> columen_B;
                    if (!(columen_B < 10 && columen_B > 0)){
                        cerr << "invalid columen! columen must be 0 - 100\n";
                    }
                }while(!(columen_B < 10 && columen_B > 0));

                //inserting values of matrix[B]
                cout << "row are should beter entered separated by space\n";
                for (int i = 0; i < row_B; i++){
                    for (int j = 0; j < columen_B; j++){
                        cin>> matrixB[i][j];
                    }
                }
                //printing matrix[B]
                for (int i = 0; i < row_B; i++){
                    cout << "|";
                    for (int j = 0; j < columen_B; j++){
                        cout << setw(5) << matrixB[i][j];
                    }
                    cout << "    |\n";
                }
                //enter to continue
                    cout << "\nPRESS [ENTER] TO CONTINUE..........";
                    cin.ignore(INT_MAX, '\n');
                    cin.get();

            break;

            case 2: // add matrix
                if (row_A > 0 && row_B > 0 && columen_A > 0 && columen_B > 0){
                if (row_A == row_B && columen_B == columen_A ){
                    for (int i = 0; i < row_B; i++){
                        for (int j = 0; j < columen_B; j++){
                            result[i][j] = matrixA[i][j] + matrixB[i][j];
                        }
                    }
                    //print added matrix
                    for (int i = 0; i < row_B; i++){
                    cout << "|";
                        for (int j = 0; j < columen_B; j++){
                            cout << setw(5) << result[i][j];
                        }
                        cout << "    |\n";
                    }
                    //enter to continue
                    cout << "\nPRESS [ENTER] TO CONTINUE..........";
                    cin.ignore(INT_MAX, '\n');
                    cin.get();
                }else {
                    cerr << "ERROR DIMENSSION! columen and row must be qual to add the two matrix";
                    //enter to continue
                    cout << "\nPRESS [ENTER] TO CONTINUE..........";
                    cin.ignore(INT_MAX, '\n');
                    cin.get();
                }
                }else{
                    cerr << "NO MATRIX CREATED!!! PLEASE CREATE MATRIX ON [1] AND TRY AGAIN!";
                    cout << "\nPRESS [ENTER] TO CONTINUE..........";
                    cin.ignore(INT_MAX, '\n');
                    cin.get();
                }
            break;

            case 3: //subtruct matrix
                if (row_A > 0 && row_B > 0 && columen_A > 0 && columen_B > 0){
                if (row_A == row_B && columen_B == columen_A ){
                        do {
                            cout << "chose [1] for matrix[A]-matrix[B] or [2] for matrixB-matrixA -> ";
                            cin >> chose;
                            if (chose != 1 && chose != 2){
                                cerr << "INVALID-CHOSE select [1] or [2]";
                            }
                        }while(chose != 1 && chose != 2);
                        for (int i = 0; i < row_B; i++){
                            for (int j = 0; j < columen_B; j++){
                                result[i][j] = matrixA[i][j] - matrixB[i][j];
                            }
                        }
                        //print subtructed matrix[A]-matrix[B]
                        if (chose == 1){
                            for (int i = 0; i < row_B; i++){
                            cout << "|";
                                for (int j = 0; j < columen_B; j++){
                                    cout << setw(5) << result[i][j];
                                }
                                cout << "    |\n";
                            }
                        }
                        //enter to continue
                        cout << "\nPRESS [ENTER] TO CONTINUE..........";
                        cin.ignore(INT_MAX, '\n');
                        cin.get();
                        //print subtructed matrix[B]-matrix[A]
                        if (chose == 2){
                            for (int i = 0; i < row_B; i++){
                            cout << "|";
                                for (int j = 0; j < columen_B; j++){
                                    cout << setw(5) << -result[i][j];
                                }
                                cout << "    |\n";
                            }
                        }
                        //enter to continue
                        cout << "\nPRESS [ENTER] TO CONTINUE..........";
                        cin.ignore(INT_MAX, '\n');
                        cin.get();
                }else {
                    cerr << "ERROR DIMENSSION! columen and row must be qual to add the two matrix";
                    //enter to continue
                    cout << "\nPRESS [ENTER] TO CONTINUE..........";
                    cin.ignore(INT_MAX, '\n');
                    cin.get();
                }
                }else {
                    cerr << "NO MATRIX CREATED!!! PLEASE CREATE MATRIX ON [1] AND TRY AGAIN!";
                    cout << "\nPRESS [ENTER] TO CONTINUE..........";
                    cin.ignore(INT_MAX, '\n');
                    cin.get();
                }
            break;

            case 4: // multiply matrix
                if (row_A > 0 && row_B > 0 && columen_A > 0 && columen_B > 0){
                if (columen_A == row_B){
                    for(int i = 0; i < row_A; i++){
                        for(int j = 0; j < columen_B; j++){
                            for (int k = 0; k < row_B; k++){
                                result[i][j] += matrixA[i][k] * matrixB[k][j];
                            }
                        }
                    }

                    //print multiplied matrix
                    for (int i = 0; i < row_A; i++){
                            cout << "|";
                            for (int j = 0; j < columen_B; j++){
                                cout << setw(5) << result[i][j];
                            }
                            cout << "    |\n";
                    }
                    //enter to continue
                    cout << "\nPRESS [ENTER] TO CONTINUE..........";
                    cin.ignore(INT_MAX, '\n');
                    cin.get();
                }else{
                    cerr << "INVALID-DIMNESSION the dimention of row and columen must be eqaul";
                    //enter to continue
                    cout << "\nPRESS [ENTER] TO CONTINUE..........";
                    cin.ignore(INT_MAX, '\n');
                    cin.get();
                }
            }else{
                cerr << "NO MATRIX CREATED!!! PLEASE CREATE MATRIX ON [1] AND TRY AGAIN!";
                cout << "\nPRESS [ENTER] TO CONTINUE..........";
                cin.ignore(INT_MAX, '\n');
                cin.get();
            }
            break;
        }


        if (!(chose > 0 && chose < 7)) {
            cerr << "ENVALID-SELECTION!!! PLEASE SELECT IN THE SCOPE OF GIVEN CHOICES";
            cout << "\nPRESS [ENTER] TO CONTINUE..........";
            cin.ignore(INT_MAX, '\n');
            cin.get();
        }
    }while(chose != 6);
    return 0;
}














