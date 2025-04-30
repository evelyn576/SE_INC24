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
    qsort(skills, size, sizeof(int), compare);
    int max_strength = 0;
    for(int i = 0; i < n; i++){
        int team_strength = skills[n - i]; 
        if (team_strength > max_strength) {
            max_strength = team_strength;
        }
    }
    printf("%d\n", max_strength);
    return 0;
}
