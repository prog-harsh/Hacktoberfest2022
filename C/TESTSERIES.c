#include <stdio.h>

int main(void) {
	int n,i,j,in,dr,en;
	int a[5];
	scanf("%d",&n);
	for (i=0;i<n;i++){
	    in=0, dr=0, en=0;
	    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	    for (j=0;j<5;j++){
	        if (a[j]==0) dr+=1;
	        else if (a[j]==1) in+=1;
	        else en+=1;
	    }
	    if (in==en) printf("DRAW\n");
	    else if (in>en) printf("INDIA\n");
	    else printf("ENGLAND\n");
	}
	return 0;
}
