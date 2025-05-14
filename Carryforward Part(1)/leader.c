#include<stdio.h>
#include<limits.h>
/*int leader(int ar[], int n){
    int count = 0;
    int max = INT_MIN;
    for(int i=0; i<=n-1; ++i){
        for(int j=i+1; j<=n-1; ++j){
            if(ar[j]>max){
                max = ar[i];
            }
            if(ar[i]>max){
                count++;
            }
        }
    }
    return count;
}*/
int leader(int ar[], int n){
    int count = 0;
    int max = INT_MIN;
    for(int i=n-1; i>=0; --i){
        if(ar[i]>max){
            count++;
            max = ar[i];
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
    int ans  = leader(ar,size);
    printf("No of leaders are: %d",ans);
    return 0;
}