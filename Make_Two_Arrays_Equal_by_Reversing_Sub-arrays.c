#include<stdio.h>
int main()
{
    int n,m,arr1[1000],arr2[1000],i,j,temp,s;
    scanf("%d",&n);
    for(i=0;i<n;i++) 
    {
        scanf("%d",&arr1[i]); 
            }
            scanf("%d",&m);
            for(i=0;i<m;i++)
            {
                scanf("%d",&arr2[i]); 
                }
                for(i=0;i<n;i++)
                {
                    for(j=i+1;j<n;j++)
                    {
                        if(arr2[i]>arr2[j]) 
                        {
                            temp=arr2[i];
                            arr2[i]=arr2[j];
                            arr2[j]=temp;
                            }
                            }
                            }
                            for(i=0;i<n;i++)
                            {
                                for(j=i+1;j<n;j++) 
                                {
                                    if(arr1[i]>arr1[j])
                                    { 
                                        temp=arr1[i]; 
                                        arr1[i]=arr1[j]; 
                                        arr1[j]=temp; 
                                        
                                    } 
                                    
                                } 
                                
                            } 
                            for(i=0;i<n;i++) 
                            {
                                if(arr1[i]!=arr2[i])
                                {
                                    printf("False");
                                    s=1;
                                    break; 
                                    
                                }
                                }
                                if(s!=1) 
                                printf("True");
    
}