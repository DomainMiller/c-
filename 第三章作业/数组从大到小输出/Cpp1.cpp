#include <iostream>//����ָ��
#define N 10
void sort(int a[],int n);//��������
void print(int a[],int n);
using namespace std;//

int main()
{
    int a[N];
    cout << "input 10 numbers:\n";//c++�е������cout,������cin
    for(int i = 0;i < N;i++)
        cin>>a[i];
    sort(a,N);
    print(a,N);
}
void sort(int a[],int n)
{
    for(int i = 0;i < n-1;i++)
        for(int j = i + 1;j < n;j++)
    {
        if(a[i]<a[j])
        {
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }

}
void print(int a[],int n)
{
    for(int i = 0;i < n;i++)
       {
           cout<<a[i];
           cout<<"  ";
       }
    cout<<endl;
}
