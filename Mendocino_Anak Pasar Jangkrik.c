#include <stdio.h>

int main(){
    int x1, v1, x2, v2;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    while((x1 < x2 && v1 > v2) || (x1 > x2 && v1 < v2)){
        x1 += v1;
        x2 += v2;
        /*Debug
        printf("x1: %d\n", x1);
        printf("x2: %d\n", x2);
        */
    }

    if(x1 == x2)
        printf("YES\n");
    else
        printf("NO\n");

}