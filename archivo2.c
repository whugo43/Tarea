#include <stdio.h>
#include <string.h>
#define MAX 26

int main (int argc, char const *argv[])
{

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
    //printf("\nLa frase encriptadosss es:\n%d\n",argv);

return 0;
}
