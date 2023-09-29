#include <iostream>
using namespace std;
int menuA();
int menuP();
// Areas
void circuloA();
void cuadradoA();
void rectanguloA();
// Perimetros
void isoscelesP();
void equilateroP();
void pentagonoP();

int menu(){
    int opc;
    cout<<"Programa que calcula areas y perimetros"<<endl;
    cout<<"1. Areas"<<endl;
    cout<<"2. Perimetros"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Ingresa la opcion deseada: ";
    cin>>opc;
    return opc;
}

int main()
{
    int opc, opc2;
    do{
        opc = menu();
        switch (opc)
        {
        case 1:{
            do
            {
                opc2 = menuA();
                switch (opc2)
                {
                case 1:
                    cuadradoA();
                    break;
                case 2:
                    circuloA();
                    break;
                case 3:
                    rectanguloA();
                default:
                    break;
                }
            } while (opc2!=4);
        }
            break;
        case 2:{
            do
            {
                opc2 = menuP();
                switch (opc2)
                {
                case 1:
                    isoscelesP();
                    break;

                case 2:
                    equilateroP();
                    break;

                case 3:
                    pentagonoP();
                default:
                    break;

                }
            } while (opc2!=4);
        }
            break;
        case 3:
            cout<<"----- Adios ------"<<endl;        
            break;
        default:
            cout<<"Ingresa una opcion valida"<<endl;
            break;
        }
    }while(opc!=3);
    return 0;
}

int menuA(){
 int opc;
    cout<<"----- Areas -----"<<endl;
    cout<<"1. Cuadrado"<<endl;
    cout<<"2. Circulo"<<endl;
    cout<<"3. Rectangulo"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"Ingresa la opcion deseada: ";
    cin>>opc;
    return opc;
}
int menuP(){
 int opc;
    cout<<"----- Perimetros -----"<<endl;
    cout<<"1. Isosceles"<<endl;
    cout<<"2. Equilatero"<<endl;
    cout<<"3. Pentagono"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"Ingresa la opcion deseada: ";
    cin>>opc;
    return opc;
}

void circuloA(){
    float radio, area;
    cout<<"Has ingresado al calculo de area del circulo"<<endl;
    cout<<"Ingresa el valor del radio: ";
    cin>>radio;
    area = 3.1416*radio*radio;
    cout<<"El area calculada es: "<<area<<endl;
}

void cuadradoA(){
    float lado, area;
    cout<<"Has ingresado al calculo de area del cuadrado"<<endl;
    cout<<"Ingresa el valor del lado: ";
    cin>>lado;
    area = lado*lado;
    cout<<"El area calculada es: "<<area<<endl;
}

void rectanguloA(){
    float base, altura, area;
    cout<<"Has ingresado al calculo de area del Rectangulo"<<endl;
    cout<<"Ingresa el valor de la base: ";
    cin>>base;
    cout<<"Ingresa el valor de la altura: ";
    cin>>altura;
    area = base * altura;
    cout<<"El area calculada es: "<<area<<endl;

}
void isoscelesP(){
    float lado, base, perimetro;
    cout<<"Has ingresado al calculo del perimetro del Triangulo Isosceles"<<endl;
    cout<<"Ingresa el valor de la base: ";
    cin>>base;
    cout<<"Ingresa el valor del lado: ";
    cin>>lado;
    perimetro = lado + lado + base;
    cout<<"El perimetro calculado es: "<<perimetro<<endl;

}
void equilateroP(){
    float lado, perimetro;
    cout<<"Has ingresado al calculo del perimetro del Triangulo Equilatero"<<endl;
    cout<<"Ingresa el valor del lado: ";
    cin>>lado;
    perimetro = lado + lado + lado;
    cout<<"El perimetro calculado es: "<<perimetro<<endl;  
     
}
void pentagonoP(){
    float lado, base, perimetro;
    cout<<"Has ingresado al calculo del perimetro del Pentagono"<<endl;
    cout<<"Ingresa el valor del lado: ";
    cin>>lado;
    perimetro = lado * 5;
    cout<<"El perimetro calculado es: "<<perimetro<<endl;
}