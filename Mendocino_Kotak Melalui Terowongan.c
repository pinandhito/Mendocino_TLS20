#include <stdio.h>

int main(){

    int n, length, width, height, i, v, top = -1;

    scanf("%d", &n);
    int vol[n];

    for (i = 0; i < n; i++){
        scanf("%d %d %d", &length, &width, &height);

        if(height < 41) {
        v = length * width * height;

        top++;
        vol[top] = v; 
        } 
    }
    
    for(i = 0; i <= top; i++){
         printf("%d\n", vol[i]);
    }
    return 0;
}