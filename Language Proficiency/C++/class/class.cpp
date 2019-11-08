#include <iostream>
#include <sstream>

using namespace std;

class Student{
    private:
    int ageS, standardS;
    string first_nameS, last_nameS;

    public:
    void set_age(int age){
        ageS = age;
    }
    void set_standard(int standard){
        standardS = standard;
    }
    void set_first_name(string first_name){
        first_nameS = first_name;
    }
    void set_last_name(string last_name){
        last_nameS = last_name;
    }
    int get_age(){
        return ageS;
    }
    int get_standard(){
        return standardS;
    }
    string get_first_name(){
        return first_nameS;
    }
    string get_last_name(){
        return last_nameS;
    }
    string to_string(){
        stringstream ss;
        ss << ageS << "," << first_nameS << "," << last_nameS << "," << standardS; 
        return ss.str();
    }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}


