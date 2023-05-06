#include "App.h"

using namespace std;
int App::start() {

    Array array(10);
    array.setArray();

    Queue<int> queue();
    try {
        queue().pop();
    }
    catch (QueueExceptions &e) {
        cerr << e.what() << endl;
    }
    queue().push(1);
    queue().push(2);
    queue().push(3);
    queue().sizeOf();
}
