#include <stdio.h>
int main(){
    float rupees;
    int Paisa;
    
    printf("Enter the paisa");
    scanf("%d",&Paisa);
    rupees=Paisa/100.0;
    printf("Your currency in rupees is %f",rupees);
}
