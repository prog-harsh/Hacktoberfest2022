#include<bits/stdc++.h>
using namespace std;
void solve(){
	    int n;
	    cin>>n;
	     char arr[n][n];
	     for(int i=0;i<n;i++){
			 for( int j=0;j<n;j++){
				 
				   cin>>arr[i][j];
				 }
	     
	      
	    }
	    int t1=0,t2=0,t3=0,t4=0,k=1;
	    for(int i=0;i<n;i++){
	          for(int j=0;j<n;j++){
	          
	         if(arr[i][j]=='*'){
	         if(k==1){
				 t1=i;
				 t2=j;
				 k++;
				 }
				 else if(k==2){
					t3=i;
					t4=j;
				
					 }
	       }
	       }
	   }
	    if(t1==t3 && t1<n-1){
			arr[t1+1][t2]='*'; 
			arr[t3+1][t4]='*';
			}
			else if(t1==t3 && t1==n-1){
			 arr[t1-1][t2]='*';
			 arr[t3-1][t4]='*';
			}
		 else if(t2==t4 && t2<n-1){
			arr[t1][t2+1]='*'; 
			arr[t3][t4+1]='*';
			}
		else if(t2==t4 && t2==n-1){
			arr[t1][t2-1]='*'; 
			arr[t3][t4-1]='*';
			}
		else{
			 arr[t1][t4]='*';
	   arr[t3][t2]='*';
			}	
	  
	    for(int i=0;i<n;i++){
			 for( int j=0;j<n;j++){
				 
				   cout<<arr[i][j];
				 }
				 cout<<endl;
   }
	   
	}
	int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
		solve();
		}
}
	
