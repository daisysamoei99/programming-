// c program to find grades of students
#include<stdio.h>
int main()
{
int bio,chem,phy;
int avg;
    printf("enter marks for bio,chem,phy");
    scanf("%d,%d,%d",&bio,&chem,&phy);
    if(bio>=0 && bio<=100 &&chem>=0 &&chem<=100 && phy>=0 && phy<=100)
    avg =(bio+chem+phy)/3;
    printf("the avg is %d",avg);
    if(avg>=70 && avg<=100)
    {
    printf("\n grade A");
    }
    else if(avg>=60 && avg<=69)
    {
    printf("\n grade B");
    }
    else if (avg>=50 && avg<=59)
    {
    printf("\n grade C");
    }
    else if(avg>=40 && avg<=49)
    {
    printf("\n grade D");
    }
    else if(avg>=0 && avg<=39)
    {
    printf("fail");
    }
    else
    {
    printf("\n enter the correct marks");
    }
    return 0;
}
    
    