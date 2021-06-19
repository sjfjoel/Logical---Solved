// Reapeted numbers in a contact number

#include<stdio.h>
int rep(char);
int length(char[]);
int r, found;
char repeated[10];
int main()
{
    int i, j, k, len=0;
    char number[13];
    printf("Enter the mobile number : ");
    scanf("%s", number);
    printf("Given number is %s\n", number);
    len = length(number);
    printf("Entered numbers length is %d\n", len);
    for(i=0; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(number[i] == number[j])
            {
                if(rep(number[j]) != 1)
                {
                    repeated[r] = number[j];
                    r++;
                }
            }
        } 
    }
    printf("Repeted numbers are : %s",repeated);
    return 0;
}
// to check whether a number already exist in new char[]
int rep(char x)
{
    int i;
    for(i=0; i<r; i++)
    {
        found = 0;
        if (repeated[i] == x)
        {
            found = 1;
            break;
        }
    }
    return found;
}
// to find the length of given number
int length(char n[])
{
    int i = 0;
    while (n[i]!='\0')
    {
        i++;
    }
    return i;
}