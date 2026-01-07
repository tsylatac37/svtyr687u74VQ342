#include<stdio.h>
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int part(int a[], int lb, int ub){
    int p = a[lb];
    int s = lb;
    int e = ub;
    while(s<e){
        while(a[s]<=p){
            s++;
        }
        while(a[e]>p){
            e--;
        }
        if(s<e){
            swap(&a[s],&a[e]);
        }
    }
    swap(&a[lb],&a[e]);
    return e;
}
void qs(int a[], int lb, int ub){
    if(lb<ub){
        int p = part(a,lb,ub);
        qs(a,lb,p-1);
        qs(a,p+1,ub);
    }
}
int main(){
   int a [] = {14,12,20,3,24,26,23,7,1};
   int n = sizeof(a)/sizeof(a[0]);
   qs(a,0,n-1);
   for(int i=0;i<n;i++){
       printf("%d ",a[i]);
   }
   
    return 0;
}
