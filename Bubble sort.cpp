void bubblesort(int a[],int N)
{
	int i,j,temp;
for(i=0;i<N;i++)
{
	for(j=0;j<(N-1)-i;j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;	
		}
	}
	
}
}
