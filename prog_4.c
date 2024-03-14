#include<stdio.h>
void add(int, int);
void sub(int, int);
void divi(int, int);
void mul(int, int);
void mod(int, int);
int main(){
    int a,b;
    printf("enter two number: ");
    scanf("%d %d", &a, &b);
    add(a,b);
    
    int c,d;
    printf("enter two number: ");
    scanf("%d %d", &c, &d);
    sub(c,d);
    
    int e,f;
    printf("enter two number: ");
    scanf("%d %d", &e, &f);
    divi(e,f);
    
    int g,h;
    printf("enter two number: ");
    scanf("%d %d", &g, &h);
    mul(g,h);
    
    int i,j;
    printf("enter two number: ");
    scanf("%d %d", &i, &j);
    mod(i,j);
    
    
    return 0;
}
void add(int a, int b){
    int c;
    c=a+b;
    printf("%d\n",c);
}

void sub(int c, int d){
    int k;
    k=c-d;
    printf("%d\n", k);
}

void divi(int e, int f){
    int c;
    c=e/f;
    printf("%d\n", c);
}

void mul(int g, int h){
    int c;
    c=g*h;
    printf("%d\n", c);
}

void mod(int i, int j){
    int c;
    c=i%j;
    printf("%d\n", c);
}