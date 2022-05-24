void indertionsort(int a[],int N)
{
	int temp,i,j;
	a[0]=INT_MIN;
	for(i=1;i<N;i++)
	{
		temp=a[i];j=i-1;
		while(temp<AR[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	
}
