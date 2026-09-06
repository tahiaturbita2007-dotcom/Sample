#include<stdio.h>
#include<math.h>

void check_ArmStrong(int n){
    int digits=0;
    int temp=n;
    while(temp>0){
        temp/=10;
        digits++;
    }
    int sum=0;
    while(n>0){
        n=n%10;
        sum+=pow(n,digits);
        n/=10;
    }
    printf("%d",sum);
}

int main(){
    int num,d,s,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    check_ArmStrong(num);
    return 0;
}
