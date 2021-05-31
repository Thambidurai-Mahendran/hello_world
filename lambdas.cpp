//below code which gives ouput 4 . why its give 4 as a output ?



#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{


    vector<int> v { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    auto val = count_if(v.begin(), v.end(), 
                        [](int v) { return v > 2 && v <= 6;});

             cout << val << endl;       
}
