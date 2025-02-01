#include<stdio.h>

/*Symmetric Square Pattern
Example n=4
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

int main() 
{

    int n;
    scanf("%d", &n);
    int i,j;
    int size=(2*n)-1;
  	for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            int val= n- ((i<j?i:j)<(size-i-1<size-j-1?size-i-1:size-j-1)
            ?(i<j?i:j):(size-i-1<size-j-1?size-i-1:size-j-1));
            printf("%d ",val);
        }
        printf("\n");
    }
    return 0;
}
