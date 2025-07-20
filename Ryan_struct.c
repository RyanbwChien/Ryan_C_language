#include <stdio.h> 

static int sum(int a, int b){
    return a + b;

};

struct Ryan{
    int a;
    int b;
    int *p;
};

int main(){
    struct Ryan Ryan_data = {
        .a = 1,
        .b = 2,
        .p = NULL
    };
    Ryan_data.p = &Ryan_data.a;
    struct Ryan *ptr = &Ryan_data;
    int res;
    res = sum(Ryan_data.a, ptr->b);
    printf("%d",res);
    return res;
}
