#include<stdio.h>
#include<stdbool.h>
#include <limits.h>
int greaterItself(int ar[], int N){
    int max = INT_MIN;
    int count = 0;
    for(int i=0; i<=N-1; ++i){
        if(ar[i]>max){
            max = ar[i];
            count = i;
        }
        else if(ar[i]<max){
            count++;
        }
    }
    return count;
}
/*int greaterItself(int ar[], int N){
    int max = INT_MIN;
    int count = 0;
    for(int i=0; i<=N-1; ++i){
        if(ar[i]>max){
            max = ar[i];
        }
    }
    for(int i=0; i<=N-1; ++i){
        if(ar[i]<max){
            count++;
        }
    }
    return count;
}*/
/*int greaterItself(int ar[],int N){
    int count = 0;
    for(int i=0; i<=N-1; ++i){
        //for ar[i]: Check if there exists an element > ar[i]
        bool isgre = false;
        for(int j=0; j<=N-1; ++j){
            if(ar[j]>ar[i]){
                isgre = true;
            }
        }
        if(isgre==true){
            count++;
        }
    }
    return count;
}*/
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int ar[size];
    for(int i=0; i<=size-1; ++i){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&ar[i]);
    }
    int ans = greaterItself(ar, size);
    printf("The count of the number of elements who has a greater element is %d",ans);
    return 0;
}
