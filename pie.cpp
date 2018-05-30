#include<omp.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    #pragma omp parallel
    {
        int t=omp_get_thread_num();
        int intervals=100 ;
        double sum = 0.0;
   double dx = 1.0 / (double) intervals;

    for (int i = 1; i <= intervals; i++) {
        double x = dx * ((double) (i - 0.5));
        double f = 4.0 / (1.0 + x*x);
        sum = sum + f;}
        cout<<sum<<endl<<t;
    }
    return 0;
}
