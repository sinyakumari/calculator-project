#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b, choice;
    float result;
    while(1){
    printf("\nCALCULATOR"); 
    printf("\n1.Addition");  
    printf("\n2.subtraction");
    printf("\n3.multiplication");
    printf("\n4.division");
    printf("\n5.remainder");
    printf("\n6.exit");
    printf("\nenter your choice");
    scanf("%d",&choice);

    if(choice==6){
    printf("exiting calculator..\nThank you");
        exit(0);
    }

    printf("\nenter the values a and b");
    scanf("%d%d",&a,&b);

    switch(choice) {
        case 1: 
           printf("\naddition is %d",a+b);
           break;
        case 2 :
        printf("\nsubtraction is %d",a-b);
        break;
        case 3: 
        printf("\nmultiplication is %d",a*b);
        break;
        case 4:
        if(b==0)  {
          printf("\ndivision by zero is not allowed");
          break;
        }
        else {
            result=(float)a/b;
        printf("\ndivision is %.2f",result);
        break; }
        case 5:
        if(b==0)  {
            printf("\nremainder with zero is not allow");
            break;
          }
          else {
         printf("\nremainder is %d",a%b);
         break;
         } 
        default :
        printf("invalid options are chosen");
    }
}
    return 0;
}