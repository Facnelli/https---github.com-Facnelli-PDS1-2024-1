#include <stdio.h>
#include <math.h>

void multiplo_5(float n){
    float multiplo5;

    multiplo5 = (int)n % 5;

    if (multiplo5 == 0){
        printf("multiplo");
        
    }else{
        printf("nao multiplo");
    }

    
}

int main(){
    float n;

    printf("diga um numero?\n");
    scanf("%f", &n);

    multiplo_5(n);
    
    return 0;
}