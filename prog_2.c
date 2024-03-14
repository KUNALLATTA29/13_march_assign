#include<stdio.h>
void swap();
void voter();
void two_num();
void three_num();
void value();
void armst();
int main(){
    swap();
    voter();
    two_num();
    three_num();
    value();
    armst();
    return 0;
}
void swap(){
    int a=4,b=2,c;
    printf("before swap: %d %d ", a,b);
    c=a;
    a=b;
    b=c;
    printf("after swap: %d %d\n", a,b);
}

void voter(){
    int a=20;
    if(a>=18){
        printf("you are eligible:   \n");
    }else{
        printf("better luck next year:   \n");
    }
}

void two_num(){
    int a=4, b=2;
    if(a>b){
        printf("%d is greater:   \n", a);
    }else{
        printf("%d is greater:   \n", b);
    }
    
}

void three_num(){
    int a=4, b=2, c= 6, max;
    max=a;
    if (b> max) {
        max = b;
    }else if (c > max) {
        max = c;
    }
    printf("%d is maximum   \n",max);
}

void value(){
    for(int i=100; i>=1;i--){
        if(i%2==0){
            printf("%d is even:  \n", i);
        }
    }
}

void armst(){
    int k=370;
    int rem,result=0;
    int temp=k;
    while(k>0){
        rem=k% 10;
        result=result+(rem*rem*rem);
        k= k / 10;
    }
    printf("%d \n", result);
    if(temp == result){
        printf("this is an armstrong number \n");
    }else{
        printf("it's not an armstrong number \n");
    }
    
}
