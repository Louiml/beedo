#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> to_do_list;
    
    int choice;
    string task;
    
    do {
        cout << "To-Do List Menu:" << endl;
        cout << "1. Add a task" << endl;
        cout << "2. View the to-do list" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter the task you want to add: ";
                cin.ignore();
                getline(cin, task);
                to_do_list.push_back(task);
                break;
                
            case 2: // View the to-do list
                cout << "To-Do List:" << endl;
                for (int i = 0; i < to_do_list.size(); i++) {
                    cout << i+1 << ". " << to_do_list[i] << endl;
                }
                break;
                
            case 3:
                cout << "Exiting program..." << endl;
                break;
                
            default:
                cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
                break;
        }
    } while (choice != 3);
    
    return 0;
}
