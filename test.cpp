#include<stdio.h>
int main()
{
	int i,m,n,j,k,num,o,p,x,y;
	int output=0;
	int a[100]={0};
	scanf("%d",&o);
	for(p=1;p<=o;p++){
		scanf("%d",&x);
		for(y=0;y<x;y++){
			scanf(" %d",&a[y]);
		}
		
        for(j=1;j<x;j++){
		    for(int m=0;m<x;m++){
			    int temp=a[m];
			    if(a[m]<a[m+1]){
				    a[m]=a[m+1];
				    a[m+1]=temp;
			    }
		    }
	    }
	    for(i=0;i<x;i++){
	    	if(a[i]==a[i+1]) continue;
	    	output=output+1;
	    } 
	    printf("%d\n",output);
	    output = 0;
	}
	return 0;
}
	
