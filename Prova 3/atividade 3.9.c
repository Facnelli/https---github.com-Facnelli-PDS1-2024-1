#include <stdio.h>
#include <math.h>

float quad_soma(float n1, float n2, float n3){

    return (pow(n1,2) + n2 + n3);

}

int main(){
    float n1, n2, n3;

    printf("diga 3 valores:\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    printf("%.1f", quad_soma(n1, n2, n3));
    
    return 0;
}