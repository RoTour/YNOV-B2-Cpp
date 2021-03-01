#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int NAME_LENGTH = 256;
int NOTE_LENGTH = 10;

float avg(const vector<int>* values) {
    int sum = 0;
    for (auto n : *values) { sum+=n; }
    return sum/values->size();
}

int main() {
    map <string, vector<int>> promo;

    while (true) {
        char tmpNumber[NOTE_LENGTH];
        char tmpName[NAME_LENGTH];

        cout << "Enter student's name (empty to exit) : " << endl;
        cin.getline(tmpName, NAME_LENGTH);

        if (string(tmpName).size()==0) { break; }

        promo[string(tmpName)] = vector<int>();

        cout << "Enter "<< tmpName <<"'s grades (empty to exit) : " << endl;
        while (true){
            cin.getline(tmpNumber, NOTE_LENGTH);
            try { promo[string(tmpName)].push_back(stoi(string(tmpNumber))); }
            catch (invalid_argument e) { break; }
        }
    }

    for(auto student : promo) {
        cout << student.first << " : " << endl;
        for (auto grade : student.second) { cout << grade << endl; }
        cout << "Student's average : " << avg(&student.second) << endl << endl << "//////////////////////" << endl << endl;
    }
}
