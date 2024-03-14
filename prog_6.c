#include<stdio.h>
void gender(char);
void armst(int);
void pallin(int);
void fact(int);
void cou(int);
void rev(int);
void fib(int);
void voter(int);
void mark_sh(int);
void swap_w(int, int);
void swap_o(int, int);
void week(int);
void month(int);
void table(int);
void sums(int);
void even(int);
void odd(int, int);
void table_in(int, int);
void elec(int);
void tick(int);
void game(char, char);

int main(){
    char ch;
    printf("choose one g,a,p,f,c,r,b,v,m,s,w,n,t,k,e,x,j,u,z,d: ");
    scanf("%c", &ch);
    if(ch=='g'){
        char k;
        printf("enter gender: ");
        scanf(" %c", &k);
        gender(k);
    }else if(ch=='a'){
        int k;
        printf("enter number: ");
        scanf("%d", &k);
        armst(k);
    }else if(ch=='p'){
        int k;
        printf("enter number: ");
        scanf("%d", &k);
        pallin(k);
    }else if(ch=='f'){
        int k;
        printf("enter number: ");
        scanf("%d", &k);
        fact(k);
    }else if(ch=='c'){
        int k;
        printf("enter number: ");
        scanf("%d", &k);
        cou(k);
    }else if(ch=='r'){
        int k;
        printf("enter number: ");
        scanf("%d", &k);
        rev(k);
    }else if(ch=='b'){
        int k;
        printf("enter number: ");
        scanf("%d", &k);
        fib(k);
    }else if(ch=='v'){
        int k;
        printf("enter age: ");
        scanf("%d", &k);
        voter(k);
    }else if(ch=='m'){
        int a;
        printf("enter grade of student: ");
        scanf("%d", &a);
        mark_sh(a);
    }else if(ch=='s'){
        char chs;
        printf("choose one w or o: ");
        scanf(" %c", &chs);
        if(chs == 'w'){
            int a,b;
            printf("enter two numbers: ");
            scanf("%d %d", &a, &b);
            swap_w(a,b);
        }else if(chs == 'o'){
            int a,b;
            printf("enter two numbers: ");
            scanf("%d %d", &a, &b);
            swap_o(a,b);
        }else{
            printf("input mismatch");
        }
    }else if(ch=='w'){
        int a;
        printf("Enter day number (1-7): ");
        scanf("%d", &a);
        week(a);
    }else if(ch=='n'){
        int a;
        printf("Enter day number (1-12): ");
        scanf("%d", &a);
        month(a);
    }else if(ch=='t'){
        int a;
        printf("Enter a number: ");
        scanf("%d", &a);
        table(a);
    }else if(ch=='k'){
        int a;
        printf("Enter a number: ");
        scanf("%d", &a);
        sums(a);
    }else if(ch=='e'){
        int a;
        printf("enter a number: ");
        scanf("%d", &a);
        even(a);
    }else if(ch=='x'){
        int a, b;
        printf("enter starting and ending number: ");
        scanf("%d %d", &a, &b);
        odd(a,b);
    }else if(ch=='j'){
        int a, b;
        printf("enter starting and ending number: ");
        scanf("%d %d", &a, &b);
        table_in(a, b);
    }else if(ch=='u'){
        int units;
        printf("Enter the number of units: ");
        scanf("%d", &units);
        elec(units);
    }else if(ch=='z'){
        int a;
        printf("enter age: ");
        scanf("%d", &a);
        tick(a);
    }else if(ch=='d'){
        char a;
        printf("choose one r, p, s: ");
        scanf(" %c", &a);
        char b;
        printf("choose again r, p, s: ");
        scanf(" %c", &b);
        game(a,b);
    }else{
        printf("input mismatch");
    }
    return 0;
}

void gender(char k){
    if(k=='m'){
        printf("male");
    }else if(k=='f'){
        printf("female");
    }else{
        printf("input mismatch");
    }
}
void armst(int k){
    
    int rem,result=0;
    int temp=k;
    while(k>0){
        rem=k% 10;
        result=result+(rem*rem*rem);
        k= k / 10;
    }
    printf("%d\n", result);
    if(temp == result){
        printf("this is an armstrong number \n");
    }else{
        printf("it's not an armstrong number \n");
    }

}

void pallin(int k){
    
    int rem,result=0;
    int temp=k;
    while(k>0){
        rem=k% 10;
        result=result*10+rem;
        k= k / 10;
    }
    printf("%d\n", result);
    if(temp == result){
        printf("this is an pallindrome number \n");
    }else{
        printf("it's not an pallindrome number \n");
    }

}
void fact(int k){
    
    int fact=1;
    for(int i=1;i<=k;i++){
        fact*=i;
    }
    printf("%d\n", fact);
    
    
}
void cou(int k){
    
    int count=0;
    while(k>0){
        count++;
        k= k / 10;
    }
    printf("%d", count);
    
    
}
void rev(int k){
    
    int rem,result=0;
    int temp=k;
    while(k>0){
        rem=k% 10;
        result=result*10+rem;
        k= k / 10;
    }
    printf("%d\n", result);
    
   
    
}
void fib(int k){
    
    int n1=0,n2=1,n3;
    printf("%d %d ",n1, n2);
    for(int i=1;i<=k;i++){
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
    
}
void voter(int k){
    
    if(k>=18){
        printf("you are eligible:   \n");
    }else{
        printf("better luck next year:   \n");
    }
    
    
}
void mark_sh(int a){
    
    if (a<25) {
        printf("F");
    }else if(25<=a<45){
        printf("E");
    }else if(45<=a<50){
        printf("D");
    }else if(50<=a<60){
        printf("c");
    }else if(60<=a<80){
        printf("B");
    }else if(80<=a){
        printf("A");
    }else{
        printf("input mismatch");
    }
    
    
}
void swap_w(int a, int b){
    
    printf("before swap: %d %d",a,b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("after swap: %d %d\n", a,b);
    
   

}
void swap_o(int a, int b){
    printf("before swap: %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap: %d %d\n", a,b);
    
}
void week(int a){
    
    if(a==1){
        printf("sunday ");
    }else if(a==2){
        printf("monday ");
    }else if(a==3){
        printf("tuesday ");
    }else if(a==4){
        printf("wednesday ");
    }else if(a==5){
        printf("thursday ");
    }else if(a==6){
        printf("friday ");
    }else if(a==7){
        printf("saturday ");
    }else{
        printf("invalid entry");
    }
    
}
void month(int a){
    
    if(a==1){
        printf("january ");
    }else if(a==2){
        printf("february ");
    }else if(a==3){
        printf("march ");
    }else if(a==4){
        printf("april ");
    }else if(a==5){
        printf("may ");
    }else if(a==6){
        printf("june ");
    }else if(a==7){
        printf("july ");
    }else if(a==8){
        printf("agust ");
    }else if(a==9){
        printf("september ");
    }else if(a==10){
        printf("october ");
    }else if(a==11){
        printf("november ");
    }else if(a==12){
        printf("december ");
    }else{
        printf("invalid mismatch");
    }
    
}
void table(int a){
    
    for(int i=1;i<=10;i++){
        printf("%d ", a*i);
    }
    
    
}
void sums(int a){
    int sum=0;
    for(int i=1;i<=a;i++){
        sum+=i;
    }
    printf("%d ", sum);
    
}
void even(int a){
    
    if(a%2==0){
        printf("its even ");
    }else{
        printf("its odd ");
    }
    
    
}
void odd(int a, int b){
    
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            printf("%d ", i);
        }
    }
    
    
}
void table_in(int a, int b){
    
    for(int i=a;i<=b;i++){
        for(int j=1;j<=10;j++){
            printf("%d ", i*j);
        }
        printf("\n");
    }
    
    
}
void elec(int units){
    
    float unit_price = 10;
    float discount, total_bill;

    total_bill = units * unit_price;
    printf("your amount without discount: %.2f\n", total_bill);
    if (units >= 1 && units <= 10) {
        discount = total_bill * 0.10;
        printf("discount: 10\n");
    } else if (units <= 20) {
        discount = total_bill * 0.15;
        printf("discount: 15\n");
    } else if (units <= 40) {
        discount = total_bill * 0.30;
        printf("discount: 30\n");
    } else if (units >= 50) {
        discount = total_bill * 0.50;
        printf("discount: 50\n");
    } else {
        discount = 0;
    }

    total_bill -= discount;
    
    printf("Final bill after discount: %.2f\n", total_bill);
    
    

}
void tick(int a){
    
    if(a<18){
        printf("there is 5 percent discount ");
    }else if(a>50){
        printf("there is 10 percent discount ");
    }else{
        printf("there is no discount ");
    }
    
    
}

void game(char a, char b){
    
    if(a=='r' && b=='p'){
        printf("p win: ");
    }else if(a=='p' && b=='s'){
        printf("s win: ");
    }else if(a=='r' && b=='s'){
        printf("r win: ");
    }else if(a=='r' && b=='r'){
        printf("tie: ");
    }else if(a=='p' && b=='p'){
        printf("tie: ");
    }else if(a=='s' && b=='s'){
        printf("tie: ");
    }else if(a=='s' && b=='r'){
        printf("r win: ");
    }else if(a=='s' && b=='p'){
        printf("s win: ");
    }else if(a=='p' && b=='r'){
        printf("p win: ");
    }else{
        printf("invalid input: ");
    }
}

