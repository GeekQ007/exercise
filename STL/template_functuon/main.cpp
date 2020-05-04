#include <iostream>
using namespace std;

template<typename T>
class TMax{
public:
    TMax();
    TMax(T a, T b){
        m_a = a;
        m_b = b;
    }
    T getMax(){
        return m_a>m_b? m_a:m_b;
    }
private:
    T m_a;
    T m_b;
};
int main(){
    TMax<int> int_Max(2,3);
    cout << int_Max.getMax() << endl;
    return 0;
}
