#include <iostream>
#include <string>
#include <unordered_map>
#include <functional>

int main() {

    std::unordered_map<std::string, int> roomNumbers = {{"CS101", 3004}, {"CS102", 4501},
                                                        {"CS103", 6755}, {"NT110", 1244},
                                                        {"CM241", 1411}};

    std::unordered_map<std::string, std::string> instructors = {{"CS101", "Haynes"}, {"CS102", "Alvarado"},
                                                        {"CS103", "Rich"}, {"NT110", "Burke"},
                                                        {"CM241", "Lee"}};

    std::unordered_map<std::string, std::string> meetingTimes = {{"CS101", "8:00 a.m."}, {"CS102", "9:00 a.m."},
                                                        {"CS103", "10:00 a.m."}, {"NT110", "11:00 a.m."},
                                                        {"CM241", "1:00 p.m."}};

    std::string courseID;
    std::cout << "Enter your course ID: ";
    getline(std::cin, courseID);

    if (roomNumbers.count(courseID)) {
        std::cout
        << "Room number: " << roomNumbers.at(courseID) << "\n"
        << "Instructor: " << instructors.at(courseID) << "\n"
        << "Meeting time: " << meetingTimes.at(courseID);
    } else {
        std::cout << "This course doesn't exist.";
    }

    return 0;
}
