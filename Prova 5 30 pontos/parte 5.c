#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int fibonacci( int n){
    int primeiro = 0;
    int segundo = 1;
    int proximo;

    for( int i = 2; i < n; i++){
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    proximo = ( n == 0) ? 0 : ( n == 1) ? 0 : ( n == 2) ? 1 : proximo;

    return proximo;
}


int main(){
    int n = 5;

    //scanf("%d", &n);

    printf("%d", fibonacci(n));

    return 0;
}