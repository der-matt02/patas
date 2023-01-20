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
        fscanf(buffer,100,archivo); //fgetc lee caracter por carater, junto con un for para que recorra la linea, fgets lee toda la linea
        if(pi% 10==0){
            fprintf(archivo, "xd \n");
            }else{
                fprintf(archivo, "%d \n", pi);
            }
            cont++;
        
    }
    
  
    fclose(archivo);
    fclose(archivo1);


    return 0;
}
