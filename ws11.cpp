#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// vector of int.
// used to store the records
typedef vector<int> Records;

// https://www.cplusplus.com/doc/tutorial/files/
class RecordsManager {
private:
    fstream _file;
    string _filename;
public:
    RecordsManager(string filename) : _filename(filename) {}

    void read(Records &records) {
        try {
            _file.open(_filename, ios::in);
            if (_file.is_open()) {
                string line;
                while (std::getline(_file, line)) {
                    try {
                        records.push_back(stoi(line));
                    } catch (const std::invalid_argument& ia) {
                        throw std::runtime_error("Wrong argument when reading the file: " + _filename);
                    } catch (const std::out_of_range& oor) {
                        throw std::runtime_error("Out of range when reading the file: " + _filename);
                    }
                }
                _file.close();
            } else {
                throw std::runtime_error("Failed to open the file: " + _filename);
            }
        } catch (...) {
            if (_file.is_open()) {
                _file.close();
            }
            throw;  // re-throw the exception to be caught in main
        }
    }
};

int main() {
    try {
        RecordsManager recordM("test_clean.txt");
        // RecordsManager recordM("test_corrupt1.txt");
        // RecordsManager recordM("test_corrupt2.txt");
        Records myRecords;
        recordM.read(myRecords);

        int sum = 0;
        for (int i = 0; i < myRecords.size(); i++) {
            sum += myRecords[i];
        }
        cout << sum << endl;
    } catch (const std::exception& e) {
        cerr << "Caught exception: " << e.what() << endl;
    } catch (...) {
        cerr << "Caught unknown exception" << endl;
    }

    return 0;
}
