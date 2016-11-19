//4. Viết chương trình tìm đoạn chung dài nhất của 2 chuỗi kí tự ví dụ "abcdefggh" và "abcgghdefg" >>>>> "defg"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void chuoi(int i,int m,char v[100],char u[100],char s[100],int t);
void main()
{
    int m, n,i,j,t;
    char s[100],u[100],p[100],v[100];
    gets(s);
    gets(u);
    m=strlen(s);
    t=0;
    for (i=0;i<m;i++) chuoi(i,m,v,u,s,t);

     puts(v);
}

void chuoi(int i,int m,char v[100],char u[100],char s[100],int t)
{
    int j;
    char p[100];

    for (j=i;j<m;j++)
        {
             p[j-i]=s[i];
             puts(p);

            printf("%d",(int)strstr(p,v));

        }
}
