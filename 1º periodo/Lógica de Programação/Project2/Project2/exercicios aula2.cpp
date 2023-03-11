#include<iostream>
#include <math.h>
using namespace std;



int main()
{
    float ladoTriangulo, area;
    cout << "Qual tamanho do lado do triangulo: ";
    cin >> ladoTriangulo;




    area = (pow(ladoTriangulo, 2) * cbrt(ladoTriangulo)) / 4;

    cout << area << endl;


    return 0;
}
