#include <stdio.h>

int change(int a);

int change(int a) {
    a=77; //Misnomer
    return 0 ;
}
int main (){
    int b = 22 ;
    //change(b);
   // printf("b is %d", b); // The value remains 22 

    return 0;
}