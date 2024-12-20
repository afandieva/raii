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

/*void sendIn(std::unique_ptr<Logger> x) {

}
int main() {
    auto smart = std::make_unique<Logger>();
    sendIn (std::move(smart));

}*/

int main() {
    std::shared_ptr<int> ptr1=std::make_shared<int> (17);
    std::cout << *ptr1 << "\n";
    std::cout << ptr1.use_count()<<"\n";

    auto ptr2=ptr1;
    std::cout<<*ptr1<<"\n";
    std::cout<<*ptr2<<"\n";
    std::cout<<ptr1.use_count()<<"\n";
    std::cout<<ptr2.use_count()<<"\n";
    std::shared_ptr<int> ptr3;
    std::cout<<ptr3.use_count()<<"\n";
    ptr3=ptr1;
    std::cout<<*ptr3<<"\n";
    std::cout<<ptr3.use_count()<<"\n";
}
