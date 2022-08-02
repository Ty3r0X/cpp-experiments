#include <iostream>
int main()
{
    int n;
    std :: cin >> n;
    for(int d =1 ; d <= n ; d ++ )
        if(n % d == 0)
            std :: cout << d << "";
    return 0;
}
