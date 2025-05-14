#include<stdio.h>
int Pair_Sum(int ar[], int N){
    int k, count=0;
    printf("Enter the sum of the pair: ");
    scanf("%d",&k);
    for(int i=0; i<=N-1; ++i){
        for(int j=i+1; j<=N-1; ++j){
            if(ar[i]+ar[j]==k){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int ar[size];
    for(int i=0; i<=size-1; ++i){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&ar[i]);
    }
    int ans = Pair_Sum(ar,size);
    printf("The number of pairs are: %d",ans);
    return 0;
}