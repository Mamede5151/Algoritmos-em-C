#include <stdio.h>
#include <conio.h>
main(){
    int c, n= 0 ;
    for(c=0; c<=255; c++){
        printf("\n%c ==> %d" ,c ,c );
        n++;
        if (n == 23){
        printf("\n\n Pressione uma tecla...");
        n=0;
        getch();
        }
    }
}
