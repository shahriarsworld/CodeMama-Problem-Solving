// Problem Statement
// You are a teacher who wants to check how well your students understand the concept of even numbers.
// You decide to give them a quiz, each asking them to write an even number. You want to write a program that reads the answers of each student and counts how many of them are correct. For this you can assume you have six students.
// #include <iostream>
// using namespace std;

int main() {
    int count = 0;
    int num;
    for (int i = 0; i < 6; i++) {
        cin >> num;
        if (num % 2 == 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
