#include <iostream>//编译指令
#define N 10
void sort(int a[],int n);//声明部分
void print(int a[],int n);
using namespace std;//

int main()
{
    int a[N];
    cout << "input 10 numbers:\n";//c++中的输出是cout,输入是cin
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
