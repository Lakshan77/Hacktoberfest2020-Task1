#include <stdio.h>

int main()
{
    char name[50];
    char country[50];
    char skill;
    int age;
    printf("Welcome to Hacktoberfest 2020\n");

    printf("Enter your name :");//Get User name
    scanf("%s",&name);
    printf("Enter your Country of Residance : ");//Get user country
    scanf("%s",&country);
    printf("Enter your Age : ");//Get user Age
    scanf("%d",&age);
    printf("Rate your programmings skills from A-D (A being the highest and D being the lowest :\n");//Get user skill level
    scanf("%c",&skill);
    printf("Thank you Happy Hacking %s", name);//Thank the user

    return 0;
}
