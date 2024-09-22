#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,s=0;
        scanf("%d",&n);
        char str[n+1];
        scanf("%s",str);
        for(i=0; i<n; i++)
        {
            if((str[i]=='p'&&str[i+1]=='i'&&str[i+2]=='e') || (str[i]=='m'&&str[i+1]=='a'&&str[i+2]=='p') )
            {
                s++;
                str[i]='x';
                str[i+1]='x';
                str[i+2]='x';
            }
        }
        printf("%d\n",s);





    }
    return 0;

}

