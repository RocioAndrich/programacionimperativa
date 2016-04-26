#include <stdio.h> 
//declaracion
int resta(int a,int b);

//main
int main(){
 int resultado=0;
 int a=3;
 int b=2;
 resultado=resta(a,b);
 printf("el numero es %i", resultado);
 return 0;
 }
 
//Definicion,implementacion
int resta(int a,int b){
 return a-b;
}



//implementar función resta, que devuelva un entero, y reciba dos parámetros, al igual que suma.
//2 - Hacer que los valores que recibe tanto la función suma como resta, 
//pida los datos por consola con la función "scanf"
