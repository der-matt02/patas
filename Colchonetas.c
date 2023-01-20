#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    FILR *archivo1=NULL;
    char buffer[100];
    double pi;

    archivo=fopen("tardigrado.txt","w");
    archivo1 = fopen("vector.txt","r");
    
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    int cont=1;
    while(!feof(archivo)){
        fgets(buffer,100,archivo); //fgetc lee caracter por carater, junto con un for para que recorra la linea, fgets lee toda la linea
        printf("la primera linea %i es %s",cont ,buffer);
        cont++;
    }
    
    fprintf(archivo,"\n");

    fputs("se agrega una quinta linea",archivo); //agrega limeas
  
    fclose(archivo);
    fclose(archivo1);


    return 0;
}
