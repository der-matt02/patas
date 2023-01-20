#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    char buffer[100];
    double pi;

    archivo=fopen("tardigrado.txt","r+");
    
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
    
/*
    fgets(buffer,100,archivo); //fgetc lee caracter por carater, junto con un for para que recorra la linea, fgets lee toda la linea
    printf("la primera linea es %s",buffer);

    fgets(buffer,100,archivo); //lee la primera linea y deja mel cursor en la sgunda
    printf("la segunda linea es %s",buffer);

    fgets(buffer,100,archivo);
    printf("la tercera linea es %s",buffer);

    fscanf(archivo, "%lf", &pi); //tiene la capacida de leer datos fomatiados 
    printf("el número en la cuarta linea es %lf",pi);
*/
    fprintf(archivo,"\n");

    fputs("se agrega una quinta linea",archivo); //agrega limeas
  
    fclose(archivo);


    return 0;
}
