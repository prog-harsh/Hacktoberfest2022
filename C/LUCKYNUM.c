#include <stdio.h>

int main(void) {
int n,a,b,c,i;
scanf("%d",&n);
for (i=0;i<n;i++){
    scanf("%d %d %d",&a,&b,&c);
    if (a==7 || b==7 || c==7){
        printf("Yes\n");
    }
    else printf("No\n");
}
	return 0;
}
