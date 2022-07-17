#include <bits/stdc++.h>
using namespace std;

int main() {


    vector<int> v;

    for(int i = 0; i < 10; i ++) {

        printf("Vector size: %d:\n", v.size());

        printf("----------------------------\n");

        v.push_back(i);

        for(int j = 0; j < v.size(); j++)
            printf("%d\t", v[j]);

        printf("\n");




    }


    return 0;
}