#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int fibonacci(int n){
    if(n <= 0){
        return 0;
    }
    int primeiro = 0;
    int segundo = 1;
    int proximo;

    for(int i = 2; i <= n; i++){
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    return segundo;
}

int main(){
    int n;

    scanf("%d", &n);

    printf("%d", fibonacci(n));

    return 0;
}
