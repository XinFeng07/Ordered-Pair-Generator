#include<bits/stdc++.h>
using namespace std;
int a[15],n,y;
bool flag[15];
void digui(int deep)
{
    if (deep==n+1)
    {
        for (int i=1;i<=n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
        y=y+1;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if (flag[i]==false)
        {
            a[deep]=i;
            flag[i]=true;
            digui(deep+1);
            flag[i]=false;
        }
    }
}
int main()
{
    cout<<"���������һ�����֣� ";
    cin>>n;
    digui(1);
    cout<<endl<<"һ����"<<y<<"������"<<endl<<endl;
    system("pause");
}
