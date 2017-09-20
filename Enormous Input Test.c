    #include<stdio.h>
    long long int arr[10000000];
     
    int DivNum(long long int k,long long int n){
    	int count=0,j=0,i;
    	for(i=0;i<n;i++){
    		if(arr[i]%k==0){
    		count++;
    		}
    	}
    	return count;
    }
    int main(){
    	
    	long long int i,n,k;
    	
    	
    	scanf("%lld%lld",&n,&k);
    	for(i=0;i<n;i++){
    		scanf("%lld",&arr[i]);
    	
    	}
    	
    	printf("%d\n",DivNum(k,n));
    	
    	return 0;
    } 
