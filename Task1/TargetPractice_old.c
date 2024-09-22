#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        char str[10][11];
        int i,s=0,j;

        for(i=0; i<10; i++)
        {
            scanf("%s",str[i]);
        }

                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 10; j++)
                    {
                        if (str[i][j] == 'X')
                        {
                            if (i == 0 || i == 9 || j == 0 || j == 9)
                            {
                                s=s+1;
                            }
                            else if (i == 1 || i == 8 || j == 1 || j == 8)
                            {
                                s=s+2;
                            }
                            else if (i == 2 || i == 7 || j == 2 || j == 7)
                            {
                                s=s+3;
                            }
                            else if (i == 3 || i == 6 || j == 3 || j == 6)
                            {
                                s=s+4;
                            }
                            else if (i == 4 || i == 5 || j == 4 || j == 5)
                            {
                                s=s+5;
                            }
                        }
                    }
                }

            printf("%d\n",s);

        }
        return 0;


    }

