#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 26
//prototipo de funciones.
void encriptar(char frase[MAX],int numero);

void encriptar(char frase[MAX],int numero)
{
    int i=0;
    char letra;
    while(frase[i]!='\0')
    {
        frase[i]=frase[i]+numero;
        i++;
    }
    printf("\nLa frase encriptadosss es:\n%s\n",frase);
}

int main(int argc, char const *argv[])
{
    //Variables necesarias

if (argc<=1){
    int x;
    char cadena[MAX];
    //Presentación
   
    printf("        cifrado cíclico:\n");
    printf("-----------------------------\n");
    printf("introduce una cadena:     ");
    //Un especificador que admite texto:
    scanf("%26[^\n]", cadena);
    //Vacía el buffer del teclado
    while(getchar()!='\n');
    //Pedimos el número
    printf("introduce un numero : ");
    scanf("%d",&x);
    //Vacía el buffer del teclado
    while(getchar()!='\n');
    //Llamamos a la función encriptar


    encriptar(cadena, x);
    getchar();
}
else{
int i=0;

char letra[MAX]="0";

int numero=0;
strcpy(letra,*argv);
printf("%s",letra);

//printf("\nLa frase encriptada es:\n%s\n",*argv);   
    while(argv[i]!='\0')
    {
        argv[i]=argv[i]+numero;
	printf("%s",argv[i]);
        i++;
    
    }
    
    return 0;

}
}
