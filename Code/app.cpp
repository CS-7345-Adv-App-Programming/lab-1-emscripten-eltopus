#include "matrix.cpp"
using namespace std;



int main()  {

    Matrix* matrix = new Matrix();
    int l = 30;
    double total = 0.0;

    for (int x = 0; x < l; x++){
        double time_taken = matrix->multMatrix(300);
        cout << "Time taken for run #: " << x << ": " << time_taken << " sec" << endl;
        total += time_taken;
    }

    double avg = total / l;
    cout << "Average Time taken for " << l << " runs is: " << avg << " sec" << endl;
    delete matrix;
    return 0;
}