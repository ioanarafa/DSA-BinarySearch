#include <stdio.h>
#include <stdlib.h>

int cautareBinara(int* v, int low, int high, int x)
{
    int mid = (low+high)/2;
    if( low == high) return low;
    if( v[mid] > x )
    {
        return cautareBinara(v, low, mid, x);
    }

    else
        return cautareBinara(v, mid+1, high, x);

}


int main()
{
    int n, x;
    scanf("%d", &n);

    int* v=(int*)calloc(n, sizeof(int));
    for(int i=0; i<n; i++)
    {
        scanf("%d", &x);
        v[i]=x;
    }

    scanf("%d", &x); //elem pe care il caut in sir
    int poz = cautareBinara(v, 0, n-1, x);
    printf("%d", poz+1);

    return 0;
}
