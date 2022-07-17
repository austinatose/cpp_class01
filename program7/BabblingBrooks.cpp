#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> streams;
    for (int i = 0; i < n; i++) {
        int input = 0; cin >> input;
        streams.push_back(input);
    }
    int temp;
    while (true) {
        int in; cin >> in;
        if (in == 77) break;
        if (in == 99) {
            int num, per; cin >> num >> per;
            num -= 1;
            temp = streams[num];
            streams[num] = per*temp/100;
            streams.insert(streams.begin()+num+1, temp-streams[num]);
            n += 1;
        }
        if(in == 88) {
            int num; cin >> num;
            num -= 1;
            streams[num+1]+=streams[num];
            streams.erase(streams.begin()+num);
            n -= 1;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << streams[i] << " ";
    }
}
