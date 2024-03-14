#include<stdio.h>
void add();
void sub();
void divi();
void mul();
void mod();
int main(){
    add();
    sub();
    divi();
    mul();
    mod();
    return 0;
}
void add(){
    int a=4,b=2,c;
    c=a+b;
    printf("%d ",c);
}

void sub(){
    int a=4, b=2, c;
    c=a-b;
    printf("%d ", c);
}

void divi(){
    int a=4, b=2, c;
    c=a/b;
    printf("%d ", c);
}

void mul(){
    int a=4, b=2, c;
    c=a*b;
    printf("%d ", c);
}

void mod(){
    int a=4, b=2, c;
    c=a%b;
    printf("%d ", c);
}