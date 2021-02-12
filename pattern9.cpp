 #include <iostream>
 #include<cstdlib>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	int testCases[t];
	int result[t];
	int res;
	
	for(int i=0;i<t;i++)
	{
	    int max=0;
	    cin>>testCases[i];
	    int array[testCases[i]];
	    
	    for(int j=0;j<testCases[i];j++)
	    {
	        cin>>array[j];
	    }
        
	    int size=sizeof(array)/4;
	    for(int p=0;p<(size-2);p++)
	    {
	        for(int q=1;q<(size-1);q++)
	        {
	            for(int r=2;r<size;r++)
	            {
                    res=(abs(array[p]-array[q])+abs(array[q]-array[r])+abs(array[r]-array[p]));
                    if(max<=res)
                    {
                        result[i]=res;
                        max=result[i];
                    }
	            }
	        }
	    }
	}
	for(int u=0;u<t;u++)
	{
	    cout<<result[u]<<endl;
	}
	return 0;
}
