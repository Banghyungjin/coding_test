#include <iostream>
#include <vector>

using namespace std;

class Building {
public:
    int time;
    vector<Building> parents;
    void addParent(Building parent) {
        parents.push_back(parent);
    }
    int returnTime() {
        return time;
    }
    bool isParent() {
        return parents.empty();
    }
};

int findTime(Building building) {
    if (building.parents.empty()) {
        return building.time;
    }
    else {
        int parentTime = 0;
        for (auto i : building.parents) {
            if (findTime(i) > parentTime) {
                parentTime = findTime(i);
            }
        }
        return parentTime + building.time;
    }
}

int main()
{
    int count = 0;
    int buildingNumber = 0;
    int ruleNumber = 0;
    int buildTime = 0;
    int first = 0;
    int second = 0;
    int target = 0;
    vector<Building> buildings;
    cin >> count;
    for (int i = 0; i < count; i++) {
        buildings.clear();
        cin >> buildingNumber;
        cin >> ruleNumber;
        for (int j = 0; j < buildingNumber; j++) {
            cin >> buildTime;
            Building b = {buildTime};
            buildings.push_back(b);
        }
        for (int j = 0; j < ruleNumber; j++) {
            cin >> first;
            cin >> second;
            buildings[second - 1].addParent(buildings[first - 1]);
        }
        cin >> target;
        cout << findTime(buildings[target - 1]);
    }

    return 0;
}
