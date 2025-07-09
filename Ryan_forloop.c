#include <stdio.h>

int multipy(int x, int y){

    return x*y;
}

int main(void){
    for(int i=1;i<9;i++){
        for(int j=1; j<=9;j++){
            printf("%dx%d\n",i,j);
        }
    }
    
    int a = 3;
    int b = 5;
    int result = multipy(a,b);
    printf("%d\n",result);

    return 0;
}
