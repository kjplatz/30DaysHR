#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main( int argc, char** argv ) {
    int N, n;
    vector<int> vec;
    
    cin >> N;
    for( int i=0; i<N; ++i ) {
        cin >> n;
        vec.push_back( n );
    }

    std::reverse( vec.begin(), vec.end() );

    for( auto it = vec.begin(); it != vec.end(); ++it ) {
        cout << *it << ' ';
    }
    cout << endl;
}
