#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(int argc, char** argv) {
    const int SIZE = 10;
    int a[SIZE];
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 10 + 1;
    }
    vector<int> v(a, a + SIZE), v2;
    ostream_iterator<int> output(cout, " ");

    cout << "Vector v antes de make_heap: \n";
    copy(v.begin(), v.end(), output);
    make_heap(v.begin(),v.end());
    cout << "Vector v após make_heap: \n";
    copy(v.begin(), v.end(), output);
    sort_heap(v.begin(),v.end());
    cout<<"\nVector v após sort_heap: \n";
    copy(v.begin(),v.end(),output);

    cout<<"\n\nArray a contém: ";
    copy(a,a+SIZE,output);

    for(int i=0;i<SIZE;i++){
        v2.push_back(a[i]);
        push_heap(v2.begin(),v2.end());
        cout<<"\nv2 após push_heap(a["<< i <<"]): ";
        copy(v2.begin(),v2.end(),output);
    }
    for(int i=0;i<v2.size();i++){
        cout<<"\nv2 após "<<v2[0]<< " ser retirado do heap\n";
        pop_heap(v2.begin(),v2.end()-i);
        copy(v2.begin(),v2.end(),output);
    }
    cout<<endl;
    return 0;
}

