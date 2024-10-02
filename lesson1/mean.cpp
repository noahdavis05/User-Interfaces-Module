#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void read_data(istream& input, vector<float>& data)
{
    float value;
    while (input >> value) {
    data.push_back(value);
}
}

float calc_mean(vector<float>& data){
    float total = 0;
    int count = 0;
    // iterate through the array and sum
    for (count; count < data.size(); count++){
        total += data[count];
    }
    return total / count;
}

int main(int argc, char* argv[])
{
  if (argc != 2) {
    cerr << "Usage: ./mean <filename>" << endl;
    return 1;
  }
  ifstream infile(argv[1]);
  if (not infile){
    cerr << "Error: cannot access " << argv[1] << endl;
    return 2;
  }
  // read the data
  vector<float> data;
  read_data(infile, data);
  cout << "There are " << data.size() << " numbers in your file" << endl;
  // calculate the mean
  float mean = calc_mean(data);
  cout << "The mean of the data is " << mean << endl;
  

  return 0;
}