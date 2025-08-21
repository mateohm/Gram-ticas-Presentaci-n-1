#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool acepta_G1(char *cad) {
    int i=0, j=strlen(cad)-1;
    while(i<j){
        if(cad[i]!=cad[j]) return false;
        i++; j--;
    }
    return true;
}

bool acepta_G2(char *cad) {
    int n=0, m=0, i=0;
    while(cad[i]=='a'){ n++; i++; }
    while(cad[i]=='b'){ m++; i++; }
    if(cad[i]!='\0') return false;
    return m == n+1;
}

bool acepta_G3(char *cad) {
    int n=0, m=0, i=0;
    while(cad[i]=='a'){ n++; i++; }
    while(cad[i]=='b'){ m++; i++; }
    if(cad[i]!='\0') return false;
    return n>0 && m == n+1;
}


bool acepta_G4(char *cad) {
    return strcmp(cad,"abb")==0 || strcmp(cad,"ab")==0;
}


bool acepta_G5(char *cad) {
    int len = strlen(cad);
    if(len < 2) return false;
    if(cad[0] != 'a' || cad[len-1] != 'b') return false;

    for(int i=1; i<len-1; i+=2){
        if(i+1 < len-1){
            if(cad[i] != 'a' || cad[i+1] != 'b') return false;
        }
    }
    return true;
}

void procesar(bool (*gramatica)(char*), char *archivo){
    FILE *f = fopen(archivo,"r");
    if(!f){ printf("⚠️ No se pudo abrir %s\n",archivo); return; }
    char linea[100];
    while(fgets(linea,100,f)){
        linea[strcspn(linea,"\n")] = 0; 
        if(strlen(linea)==0) continue;
        if(gramatica(linea))
            printf("%s -> ACEPTA\n", linea);
        else
            printf("%s -> NO ACEPTA\n", linea);
    }
    fclose(f);
}

int main(){
    int opcion;
    char archivo[50];

    printf("Selecciona la gramática:\n");
    printf("1. G1\n");
    printf("2. G2\n");
    printf("3. G3\n");
    printf("4. G4\n");
    printf("5. G5\n");
    printf("Ingresa el número de la gramática: ");
    scanf("%d", &opcion);

    printf("Ingresa el nombre del archivo .txt: ");
    scanf("%s", archivo);

    switch(opcion){
        case 1: procesar(acepta_G1, archivo); break;
        case 2: procesar(acepta_G2, archivo); break;
        case 3: procesar(acepta_G3, archivo); break;
        case 4: procesar(acepta_G4, archivo); break;
        case 5: procesar(acepta_G5, archivo); break;
        default: printf("Opción no válida\n");
    }
    return 0;
}
