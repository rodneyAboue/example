#include <iostream>
#include "openmp.h>
using namespace std;

int main(int argc, char** argv)
{
    cout<<"nb threads "<<omp_get_thread_num()<<endl;
    return 0;
}
