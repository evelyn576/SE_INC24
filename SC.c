#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int main(){
    int n;
    scanf("%d", &n);
    int size = 3 * n;
    int skills[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &skills[i]);
    }
}
