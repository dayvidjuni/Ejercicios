/*Construir un programa en C que permita, dada una fecha, convertirla a packet format.*/
#include <iostream>
#include <bitset>

std::string DecimalABinarioDay(int day) {
    return std::bitset<5>(day).to_string();
}

std::string DecimalABinarioM(int month) {
    return std::bitset<4>(month).to_string();
}

std::string DecimalABinarioYear(int year) {
    return std::bitset<7>(year).to_string();
}

std::string DecimalABinarioYear2(int year) {
    return std::bitset<7>(year).to_string();
}

std::string BinarioAHexadecimal(std::string numero) {
    if (numero == "0000") {return "0";}
    else if (numero == "0001") {return "1";}
    else if (numero == "0010") {return "2";}
    else if (numero == "0011") {return "3";}
    else if (numero == "0100") {return "4";}
    else if (numero == "0101") {return "5";}
    else if (numero == "0110") {return "6";}
    else if (numero == "0111") {return "7";}
    else if (numero == "1000") {return "8";}
    else if (numero == "1001") {return "9";}
    else if (numero == "1010") {return "A";}
    else if (numero == "1011") {return "B";}
    else if (numero == "1100") {return "C";}
    else if (numero == "1101") {return "D";}
    else if (numero == "1110") {return "E";}
    else if (numero == "1111") {return "F";}
}

int main(){

    int day, month, year;/*se hace raro poner ano jajajajja mejor en ingles jajajjaja*/
    std::string com="";

    std::cout<<"ingrese la fecha \nNOTA: en el caso de year solo admite 2 digitos (day/month/year): ";
    std::cin>>day>>month>>year;

    std::string bin_day=DecimalABinarioDay(day);
    std::string bin_month=DecimalABinarioM(month);
    std::string bin_year=DecimalABinarioYear(year);

    com = bin_day + bin_month + bin_year;

    std::string p1;
    std::string p2;
    std::string p3;
    std::string p4;
    std::string hexadecimal;

    for (int i = 0; i < 4; i++)
    {
        p1+=com[i];
    }

    for (int i = 4; i < 8; i++)
    {
        p2+=com[i];
    }
    for (int i = 8; i < 12; i++)
    {
        p3+=com[i];
    }
    for (int i = 12; i < 16; i++)
    {
        p4+=com[i];
    }

    hexadecimal=BinarioAHexadecimal(p1)+BinarioAHexadecimal(p2)+BinarioAHexadecimal(p3)+BinarioAHexadecimal(p4);

    std::cout<<"Binario: "<<com<<"\n";
    std::cout<<"Hexadecimal: "<<hexadecimal<<"\n";
    system ("pause");
    return 0;
}