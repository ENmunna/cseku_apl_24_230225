#include<stdio.h>
int main()
{
    int t,i;
    char a,b;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf(" %c %c",&a,&b);

        int m=a+1-'a';
        int n=b+1-'a';
        if(m<n)
        {
            printf("%d",(m-1)*25+n-1);
        }
        else
        {
            printf("%d",(m-1)*25+n);
        }
        printf("\n");


  }
  return 0;



}

