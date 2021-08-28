#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void readFile();
//void writeFile(int a[i]);
void stringToArray(string datastring);


void readFile (){
    ifstream readfile;
    string datastring;
    int dataint;

    readfile.open("extraclass.txt", ios::in); //Abrir readfile modo readFile.

    if (readfile.fail()){
        cout << "No se pudo abrir el readfile.";
        exit(1);
    }

    while (!readfile.eof()){ //Mientras no sea el final del readfile.
        getline(readfile, datastring);
        cout << datastring << endl;
        stringToArray(datastring);
    }

    readfile.close(); //Cerramos el readfile.
}

void stringToArray(string datastring){ // Converts string to an int array.

    int datalength = datastring.length(); // Length of string data.

    int a[datalength] = { 0 }; //Array with size of length.
  
    int j = 0, i, sum = 0;
  
    for (i = 0; datastring[i] != '\0'; i++){ // Cross the string.
  
        if (datastring[i] == ',') // if "," ignore.
            continue;
         if (datastring[i] == ' '){
            j++; // Move j to next location.
        }
        else {
            a[j] = a[j] * 10 + (datastring[i] - 48); //Subtract str[i] by 48 to convert it to int. Generate number by multiplying 10 and adding (int)(str[i]).
        }
    }
  
    cout << "arrayInt[] = ";
    for (i = 0; i <= j; i++) {
        cout << a[i] << " ";
    }
    insertionSort(a[i], i);
}

void insertionSort(int a[x], x){
    int i, j, temp;

    for (i = 1; i < x;  i++){
        temp = a[i]; //Next element.
        j = i - 1; //Move left.
         while (j >= 0 && a[j] > temp){
             a[j + 1] = a[j];
             j = j - 1;
         }
         a[j + 1] = temp;
    }
    writeFile(a[i]);
}

void writeFile(int a[i]){
    ofstream writefile;
    int a[i];

    writefile.open("extraclass.txt", ios::out); //Abriendo el archivo.

    if (writefile.fail()){
        cout<<"No se pudo abrir el archivo.";
        exit(1);
    }

    writefile << a[i] << " " << endl;
    writefile.close();
}

int main (){
    readFile();

    system("pause");
    return 0;
}

  
//4, 8, 3, 2, 5
