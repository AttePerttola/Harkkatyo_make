#include <stdio.h>
#include <stdlib.h>

int main( int argc, const char* argv[] )
{
    FILE *fp;
    char line[255];


    if(argc == 1){
    }

    else if(argc == 2){

    
    }

    else if (argc == 3){

    }

    else{ 
        printf("Too many arguments. Usage: reverse <input> <output>");
    }


    if((fp = fopen("file.txt","r"))== NULL){
        perror("juu");
        exit(1);

    }

    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line); 
        
    }
    printf("\n");
    fclose(fp);
    return 0;
}