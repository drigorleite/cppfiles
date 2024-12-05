#include <iostream>
using namespace std;

int equalsF() {
    int lowScore = 0;
    cout << "What is a F in your school? " << endl; //o programa precisar saber qual a media do aluno para se adequar a diferentes medias.
    cin >> lowScore;

    return lowScore;
}

double media(double nota1, double nota2, double nota3, double nota4) {
    double total = (nota1 + nota2 + nota3 + nota4) / 4;
    return total; //Estava dando erraado por conta de que void nao retorna valor, entao tive que mudar para double media1(...) pora que pudesse funcionar.
}

int main() {
    double nota1, nota2, nota3, nota4;

    cout << "AM I GOING TO HAVE A F?" << endl;

    cout << "Enter your first grade: " << endl;
    cin >> nota1;
    cout << "Enter your second grade: " << endl;
    cin >> nota2;
    cout << "Enter your first grade: " << endl;
    cin >> nota3;
    cout << "Enter your first grade: " << endl;
    cin >> nota4;


    int lowScore = equalsF();
    double total = media(nota1, nota2, nota3, nota4);

    if (total > lowScore) {
        cout << "Voce passou com " << total << "de media final. Parabens!" << endl;
    } else {
        cout << "Voce reprovou por " <<  lowScore - total << "Your final grade is: " << total << endl;
    }

    string exit = "";
    cout << "Do you want to exit?";
    cin >> exit;


    return 0;
}