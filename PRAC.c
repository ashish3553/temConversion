#include<stdio.h>
int main()
{
    int A,B,C,D,E,T;
    scanf(" %d",&T);
    scanf(" %d%d%d%d%d",&A,&B,&C,&D,&E);
    while(T--)
    {
       if(A+B<=D&&C<=E){
       printf("YES\n");}
      else if(B+C<=D&&A<=E)
    
      { printf("yes\n");}
       else if(A+C<=D&&B<=E)
       {printf("YES\n");}
       else
       {printf("NO\n");}
    }
    return 0;
}