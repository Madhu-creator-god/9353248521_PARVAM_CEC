/*using c++ with task ID and task name using switch case class create class update class and delete class*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Task {
    public:
        int id;
        string name;

        Task(int id, string name) : id(id), name(name) {}
        void display() {
            cout << "Task ID: " << id << ", Task Name: " << name << endl;
        }
};
class TaskManager {
    private:
        vector<Task> tasks;

    public:
        void createTask(int id, string name) {
            tasks.push_back(Task(id, name));
            cout << "Task created successfully." << endl;
        }

        void updateTask(int id, string newName) {
            for (auto &task : tasks) {
                if (task.id == id) {
                    task.name = newName;
                    cout << "Task updated successfully." << endl;
                    return;
                }
            }
            cout << "Task not found." << endl;
        }

        void deleteTask(int id) {
            for (auto it = tasks.begin(); it != tasks.end(); ++it) {
                if (it->id == id) {
                    tasks.erase(it);
                    cout << "Task deleted successfully." << endl;
                    return;
                }
            }
            cout << "Task not found." << endl;
        }

        void displayTasks() {
            if (tasks.empty()) {
                cout << "No tasks available." << endl;
                return;
            }
            for (const auto &task : tasks) {
                task.display();
            }
        }
};
int main() {
    TaskManager taskManager;
    int choice, id;
    string name;
    while (true) {
        cout << "1. Create Task\n2. Update Task\n3. Delete Task\n4. Display Tasks\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Task ID: ";
                cin >> id;
                cout << "Enter Task Name: ";
                cin.ignore();
                getline(cin, name);
                taskManager.createTask(id, name);
                break;
            case 2:
                cout << "Enter Task ID to update: ";
                cin >> id;
                cout << "Enter new Task Name: ";
                cin.ignore();
                getline(cin, name);
                taskManager.updateTask(id, name);
                break;
            case 3:
                cout << "Enter Task ID to delete: ";
                cin >> id;
                taskManager.deleteTask(id);
                break;
            case 4:
                taskManager.displayTasks();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
