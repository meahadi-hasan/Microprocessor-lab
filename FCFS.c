#include <stdio.h>
int main() {
    int a[5], n=5, p, b[5], q, c[5], r, burst[5] = {2, 6, 4, 7, 4}; 
    
    printf("Enter Arrival Time: ");
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    
    for (int i=0;i<n;i++) {
        b[i]=i+1; 
    }
    
    for (int i=0;i<n;i++) {
        c[i]=burst[i]; 
    }
    
    for(int j=0;j<n-1;j++) {
        for(int i=0;i<n-1;i++) {
            if (a[i]>a[i+1]) {
                p=a[i];
                a[i]=a[i+1];
                a[i+1]=p;
                q=b[i];
                b[i]=b[i+1];
                b[i+1]=q;
                r=c[i];
                c[i]=c[i+1];
                c[i+1]=r;
            }
        }
    }
    printf("\nArrival time : ");
    for(int i=0;i<n;i++) {
        printf("%d\t",a[i]);
    }
    printf("\nProcess ID: ");
    for(int i=0;i<n;i++) {
        printf("P%d\t",b[i]);
    }
    printf("\nBurst Time: ");
    for(int i=0;i<n;i++) {
        printf("%d\t",c[i]);
    }
}