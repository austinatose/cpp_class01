#include <iostream>
#include <vector>

using namespace std;

int main() {
    for (int testcase = 0; testcase < 10; testcase++) {
        int N; cin >> N;
        int minDiameter = 70005;
        vector<int> badRouteIDs;
        int routes[701][71];
        for (int i = 0; i < N; i++) {
            int routeID; cin >> routeID;
            int R; cin >> R;
            for (int j = 0; j < R; j++) {
                int roundabout; cin >> roundabout;
                if (roundabout <= minDiameter) {
                    minDiameter = roundabout;
                }
                routes[i][j] = roundabout;
            }
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < 72; j++) {
                if (routes[i][j] == minDiameter) {
                    badRouteIDs.push_back(i + 1);
                    break;
                }
                if (routes[i][j] == 0) {
                    break;
                }
            }
        }

        cout << minDiameter << " ";
        for (int i = 0; i < badRouteIDs.size(); i++) {
            if (i == 0) cout << "{";
            cout << badRouteIDs[i];
            if (i == (badRouteIDs.size() - 1)) {
                cout << "}" << "\n";
            } else {
                cout << ", ";
            }
        }
    }
}

// if (!(count(badRouteIDs.begin(), badRouteIDs.end(), routeID)))
                        // badRouteIDs.push_back(routeID);