#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    char *a[100];
    for(int i=0;i<n;i++)
    {
        *(a+i)=(char*)malloc(sizeof(int));
        scanf("%s\n",*(a+i));
    }
    char t[100];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(*(a+i),*(a+j))>0)
            {
                strcpy(t,*(a+i));
                strcpy(*(a+i),*(a+j));
                strcpy(*(a+j),t);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s ",*(a+i));
    }
}
