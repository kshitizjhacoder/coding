import java.util.*;
class Heapsort
{
	 void heapsort(int arr[],int n)
	{
		 for(int i=n/2-1;i>=0;i--)
			 heapify(arr,n,i);
		 for(int i=n-1;i>0;i--)
		 {
			 int temp = arr[0];
			 arr[0] = arr[i];
			 arr[i] = temp;
			 heapify(arr,i,0);
		 }
	}
	void heapify(int arr[],int n,int i)
	{
		int largest = i;
		int l = 2*i+1;
		int r = 2*i+2;
		if(l<n&&arr[l]>arr[largest])
			largest = l;
		if(r<n && arr[r]>arr[largest])
			largest = r;
		if(largest!=i)
		{
			int swap = arr[i];
			arr[i] = arr[largest];
			arr[largest] = swap;
			heapify(arr,n,largest);
		}
	}
	static void printarray(int arr[])
	{
		for(int i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+" ");
		}
	}
	public static void main(String args[])
	{
		Heapsort ob = new Heapsort();
		Scanner sc  =  new Scanner (System.in);
		System.out.print("Enter the number of elements");
		int n =sc.nextInt();
		int arr[] = new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i] = sc.nextInt();
		}
		ob.heapsort(arr,n);
		printarray(arr);
		sc.close();
	}
}