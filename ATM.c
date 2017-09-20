    #include<stdio.h>
     
    float calculation(int w,float a){
    	float total;
    	if(a>=w+0.5){
     
    		if(w%5==0){
    			total=a-(w+0.5);
    		}
    		else{
    			total=a;
    		}
    	}
    	else{
    		total=a;
    	}
    	
    	return total;
    }
    int main(){
     
    	int withdraw;
    	float  amount;
    	scanf("%d%f",&withdraw,&amount);
    	printf("%.2f\n",calculation(withdraw, amount));
     
    	return 0;
    } 
