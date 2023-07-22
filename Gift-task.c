/*WAP to print the statement which type of statement is given to which student whome
 have gift of rs 45 for giving to those who passess maths and 
science exam both ,we have gift of rs 15 to those who passes only maths or science?*/

#include<stdio.h>

int main()
{
    int m_marks,s_marks;
    printf("Enter your marks of maths subject:");
    scanf("%d",&m_marks);

    printf("Enter your marks of science subject:");
    scanf("%d",&s_marks);

    if(m_marks>34)
    {
        if(s_marks>34)
        {
            printf("You earned the gift of rs.45");
        }
    }
    if(m_marks)
    {
        printf("You earned the gift of rs.15");
    }
    else
    {
        printf("You earned the gift of rs.15");
    }
    return 0;
}