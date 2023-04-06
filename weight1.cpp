#include<stdio.h>
#include<stdlib.h>
#include<iostream> 
class quan{
	private:
		int f=0;
	    char a[10000];
	    char b[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	    int c[27]={0,0,0};
 	    char *p=a;
 	public:
	    int quanzhong(char*p){
	    	 		for(;*p!='\0';p++){
		    for(int i=0;i<26;i++){
			    if(*p==b[i]){
				c[i]++; 
			    }
		    }
	    }
        for(int j=0;j<26;j++){
    	    for(int i=0;i<26;i++){
		        if(c[i]<c[i+1]){
			        int temp=c[i];
			        c[i]=c[i+1];
			        c[i+1]=temp;
		        }
	        }
        }
        for(int i=0;i<26;i++){
    	    f+=c[i]*(26-i);
        }
        return f;
	    } 		
		
		
}; 
int main()
{
	quan fs;
	char *p=(char *)malloc(1000*sizeof(char *));
	scanf("%s",p);
	int m=fs.quanzhong(p);
    printf("%d",m);
    
} 

