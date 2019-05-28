#include <iostream>

using namespace std;



int *insertion_sort(int *A,int length)
{
    int key;
    int i;
    for (int j=1; j<length; j++)
    {
        key = *(A+j);
        i = j-1;
        while (i>=0 && *(A+i)>key)
        {
            *(A+i+1) = *(A+i);
            i--;
        }
        *(A+i+1) = key;
    }
    return A;
}

int main()
{
    int A[] = {5,4,3,2,1,69,97,34,9,13,45};
    cout<<"-------input array-------"<<endl;
    int length = sizeof(A)/sizeof(A[0]);
    for(int index=0;index<length;index++)
    {
        cout<<A[index]<<"\t";
    }
    cout<<endl;
    int *pA = A;
    pA = insertion_sort(pA,length);
    cout<<"-------sorted array-------"<<endl;
    for(int index=0;index<length;index++)
    {
        cout<<*(pA+index)<<"\t";
    }

}
