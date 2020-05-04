#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> intVecA;
    intVecA.push_back(1);
    intVecA.push_back(2);
    intVecA.push_back(3);
    intVecA.push_back(4);
    intVecA.push_back(5);

    intVecA.pop_back();

    intVecA[2]=100;
    intVecA.at(3)=200;

    int& nFront = intVecA.front();
    nFront = 0;
    int& nBack = intVecA.back();
    nBack = 0;

    for(vector<int>::iterator it=intVecA.begin();it!=intVecA.end();it++){
        cout<<*it<<' ';
    }
    cout << endl;
    return 0;
}
