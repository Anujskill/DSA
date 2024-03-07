#include<stdio.h>

int main(){

    
    int a = 1 , b = 2 , c = 2 , d = 3 , e;
    // 2 1 1 3 =1
    e = ++a && --b  || --c || ++d ;
    printf("A: %d - B: %d - C: %d - D: %d - E: %d",a,b,c,d,e);

    // 2 3 2 3 =1
    // e = ++a && ++b  || --c || --d ;
    // printf("A: %d - B: %d - C: %d - D: %d - E: %d",a,b,c,d,e);


    // 0 2 2 3 =1
    // e = --a && ++b  && --c || d ;
    // printf("A: %d - B: %d - C: %d - D: %d - E: %d",a,b,c,d,e);


    // 0 3 1 3 =1
    //e = --a || ++b  && --c || d ;
    //printf("A: %d - B: %d - C: %d - D: %d - E: %d",a,b,c,d,e);

    // int a = 1 , b = 2 , c = 2 , d;
    // d = a && b  || c;
    // printf("a: %d b: %d c: %d d: %d",a,b,c,d);

    // int a = 1 , b = 2 , c ;
    // c = a && b ;
    // printf("a: %d b: %d c: %d",a,b,c);

    return 0;
}