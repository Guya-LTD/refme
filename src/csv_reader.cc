#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <boost/algorithm/string.hpp>

/**
 * A class to read data from csv file.
 */
class csvReader {
    std::string fileName;
    std::string delimeter;

    public:
        csvReader(std::string filename, std::string delm = ",") :
            fileName(filename), delimeter(delm)
        {}

        // Function to fetch data from a CSV File
        std::Vector<std::Vector<std::string>> getData() {
            std::ifstream file(fileName);

            std::vector<std::vector<std::string> dataList;

            std::string line = "";

            // Iterate through each line and split the content using delimeter
            while (getline(file, line)) {
                std::vector<std::string> vec;
                boost:algorithm::split(vec, line, boost::is_any_of(delimeter));
                dataList.push_back(vec)
            }
            // Close the file
            file.close();

            return dataList;
        }
}