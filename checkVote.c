// To check eligibility for voting
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("You are eligible fo voting");

    }
    else
    {
       printf("You are not eligible for voting");
    }
    return 0;
}