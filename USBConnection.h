#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>

class USBConnection {
private:
    int id;
    static std::stack<int> ids;
    USBConnection(int id) : id(id) {}

public:
    ~USBConnection() {
        ids.push(id);
    }

    static USBConnection* CreateUsbConnection() {
        if (ids.empty()) {
            return 0;
        } else {
            int id = ids.top();
            ids.pop();
            return new USBConnection(id);
        }
    }

    int get_id() const {
        return id;
    }

    static std::stack<int> initialize_ids() {
        std::stack<int> temp_ids;
        for (int i = 3; i > 0; --i) {
            temp_ids.push(i);
        }
        return temp_ids;
    }
};

std::stack<int> USBConnection::ids = USBConnection::initialize_ids();

#endif 
