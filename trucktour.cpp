#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<tuple>
using namespace std;

struct Station {
    int drink;
    int distanceToNext;
    Station()
    {

    }

    Station(int f,int d) : drink(f), distanceToNext(d) {}
};

bool getIfStart (vector<Station>& stations, int startStation) {
    int totalDrink = 0;
    int currentStation = startStation;

    while (true) {
        totalDrink += stations[currentStation].drink; // Fill her up

        if (totalDrink < stations[currentStation].distanceToNext) {
            // Not enough fuel to reach next pump
            return false;
        } else {
            int nextStation = (currentStation + 1) % stations.size();
            if (nextStation == startStation) {
                return true; // Completed loop
            } else {
                totalDrink -= stations[currentStation].distanceToNext;
                currentStation = nextStation; // Keep on truckin
            }
        }
    }
}


int main()
{


    int n;
    cin>>n;
    std::vector<Station > value;

    for(int i=0;i<n;i++)
    {
        Station a;
        cin>>a.drink>>a.distanceToNext;
        value.push_back(a);


    }

    for(int i=0;i<n;i++)
    {
        if(getIfStart(value,i))
        {
            std::cout<<i;
            return 1;
        }
    }

    return 0;


}

