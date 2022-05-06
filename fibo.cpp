#include <bits/stdc++.h>
using namespace std;

const int mod = 1e6+7;
int n;

int main()
{
    cin >> n;	// input n
    int grandpa = 1, father = 1, son = 1;		
    // grandpa <=> f(n-2)
    // father <=> f(n-1)
    // son <=> f(n)

    for(int i = 3; i <= n; i++){
        son = ((grandpa % mod) + (father % mod) ) % mod;
        grandpa = father;
        father = son;
    }

    cout << son;	// output f(n)
    return 0;
}
