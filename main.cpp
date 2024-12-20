#include <iostream>
#include <memory>
#include <utility>

/*int* f() {
    return new int(17);
}
std::unique_ptr<int> g() {
    return std::make_unique<int> (17);
}
int main() {
    int* ptr = new int(17);
    std::cout << *ptr << "\n";
    delete ptr;

    std::unique_ptr <int> smart = std::make_unique <int>(17);
    std::cout << *smart << "\n";
    f();
    g();
}*/

void sendIn(std::unique_ptr<Logger> x) {

}
int main() {
    auto smart = std::make_unique<Logger>();
    sendIn (std::move(smart));

}
