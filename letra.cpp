/*Construir un programa para convertir letras de minúsculas a mayúsculas o viceversa, sin emplear las funciones propias de C, luego intentar lo mismo en Java o Phyton*/
#include <iostream>

int main(){

    char letra;
    inicio:
    std::cout<<"Ingrese la letra: ";
    std::cin>>letra;

    switch (letra)
    {
    
    case 'a':
        std::cout<<"A\n";
            break; 
    case 'e':
        std::cout<<"E\n";
        break;
    case 'i':
        std::cout<<"I\n";
        break;
    case 'o':
        std::cout<<"O\n";
        break;
    case 'u':
        std::cout<<"U\n";
        break;

    case 'A': std::cout<<"a\n"; break;
    case 'E': std::cout<<"e\n"; break;
    case 'I': std::cout<<"i\n"; break;
    case 'O': std::cout<<"o\n"; break;
    case 'U': std::cout<<"u\n"; break;

    default:
        std::cout<<"no es una vocal, intentalo de nuevo \n";
        goto inicio;
        break;
    }

    system("pause");
    return 0;
}