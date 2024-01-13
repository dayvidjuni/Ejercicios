/*c)	Construir un programa en C que permita contar los bits unos “1” de un número de 16-bit
, no se debe de emplear las funciones que tiene c para este proceso.*/

#include <iostream>
#include <string.h>
int ContarUnos(std::string numero){
    int contador=0,longitud=0;

    for (int i = 0; i < 16; i++)
    {
        if (numero[i]=='1')
        {
                contador++;
        }
    } 
    return contador;
}
std::string DecimalABinario(int numero) {
    if (numero == 0) {
        return "0000";
    }

    std::string resultado = "";
    while (numero > 0) {
        int bit = numero % 2;
        resultado = std::to_string(bit) + resultado;
        numero /= 2;
    }

    while (resultado.size() < 4) {
        resultado = "0" + resultado;
    }

    return resultado;
}

 int main(){

    std::string numero = {};
    std::string num;
    int longitud,contador=0,unos=0;
    std::cout<<"ingrese un numero de 16 bits, puede ser en binario o decimal \nNOTA:asegurate de colocar completamente los 16 bits completando con 0\nejemplo: 0010011111100111\nejemplo en decimal: 0012\ningrese el numero :";
    std::cin>>numero;
    longitud=numero.size();

    if (longitud==16)
    {
        unos=ContarUnos(numero);
    }else if (longitud==4){
        num=DecimalABinario(std::stoi(numero));
        unos=ContarUnos(num);
    }else{
        std::cout<<"no es de 4 bits";
    }
    

    if (unos==0)
    {
        std::cout<<"no tiene ningun bit 1\n";
    }else{

        std::cout << "El numero de bits '1' es: " << unos <<std::endl;
    }
    system ("pause");
    return 0;
 }
