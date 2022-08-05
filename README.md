//96A-Football

#include<stdio.h>
#include<string.h>
int main(){
    int len,i,count=0,count1=0;
    char a[100];
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i] == '0')
        {
         count++;
         count1=0;
         if(count >= 7)
            {
              break;
            }
        }
        else if(a[i] == '1')
        {
          count1++;
          count=0;
          if(count1 >= 7)
            {
              break;
            }
        }
    }
    if(count >= 7 || count1 >= 7){ printf("YES"); }
    else
       printf("NO");
 return 0;
}
