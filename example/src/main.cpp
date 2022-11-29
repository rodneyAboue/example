#include <iostream>
#include "openmp.h>
using namespace std;

int main(int argc, char** argv)
{
    cout << "hello world!: Kenneth Abouedf fvzdczedazd" << endl;
    #pragma omp parallel {
    cout<<omp_get_thread_num()<<endl;
    }
    return 0;
}
