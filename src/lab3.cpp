#include "eecs230.h"

//
// Lab 3 EXAMPLE functions
//

/* The main function, or the "entry function" of the lab3 program, simply calls the other
 * functions to run.
 */
void convert() {
    vector <double> in, out;
    double x;
    double y;
    cout << "Enter lengths in inches (stop with 0):\n";
    while (cin >> x && x != 0) {
        in.push_back(x);
        y = x*2.54;
        out.push_back(y);



    }
    for (int i=0; i < in.size(); i++) {
        cout << in[i] <<" inches equals " << out[i] << " cm\n";
    }
}

void censor() {
    vector <string> a, v;
    string input, censor;
    cout << "Enter sentence (end with 0)\n";
    while (cin >> input && input != "0") {
        a.push_back(input);
        if (input == "bad") {
            censor = "censored";
        }
        else {
            censor = input;
        }
        v.push_back(censor);
    }
    for (int i=0; i < a.size(); i++) {
        cout << v[i] <<" ";
    }


}


int main() {
    //convert();
    censor();
    return 0; // Lets the operating system know everything ran successfully.
}

