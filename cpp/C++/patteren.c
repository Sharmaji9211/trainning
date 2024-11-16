#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int n,len,end,start,i,j;
    scanf("%d", &n);
    len=(2*n-1);
    end=len-1;
    start=0;
        for(i=start;i<end;i++){
            for(j=start;j<end;j++){
                if(i==start||i==end||j==start||j==end){
                  printf("%d ",n);  
                }
             else 
             continue;
             printf("\n");
             
             end--;
             n--;
            }
        }
       
     
    return 0;
}

