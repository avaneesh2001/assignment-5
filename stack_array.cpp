
#include<iostream>
using namespace std;
//creating a class to hold stack array and its operations as member functions
class stack{
    int top=-1;
    //Stack of size 5
    int s[5];
    public:
    //defining operations as member functions
    void push(int a){
        if(top==4){
            cout<<"Stack overflow error"<<endl;
        }
        else{
            top++;
            s[top]=a;
            cout<<"Value is pushed onto stack"<<endl;
        }
    }
    int pop(){
        if(top<0){
            cout<<"Stack is empty"<<endl;
        return -9999;
        }
        else{
            int a = s[top];
            top--;
            return a;
        }
    }
    int peek(){
        if(top<0){
            cout<<"Stack is empty"<<endl;
        return -9999;    
        }
        else{
            int a = s[top];
            return a;
        }
    }
    int isEmpty(){
        //top<0 isEmpty returns 1
        return(top<0);
    }
    void display(){
        cout<<"-----STACK------"<<endl;
        for(int i=top;i>=0;i--){
            cout<<s[i]<<endl;
        }
    }
};
int main(){
    int op,a;
    char c='y';
    class stack S;
    while(c=='y'){
    cout<<endl<<"--------------------------MENU----------------------------"<<endl;
    cout<<"1:PUSH   2:POP   3:PEEK  4:ISEMPTY   5:DISPLAY   6:EXIT  ";
    cin>>op;
    
    switch(op){
        case 1:
            cout<<"Enter value to be pushed: ";
            cin.ignore();
            cin>>a;
            S.push(a);
            break;
        case 2:
            a=S.pop();
            cout<<"Vlaue poped is: "<<a;
            break;
        case 3:
            a=S.peek();
            cout<<"Vlaue peeked is: "<<a;
            break;
        case 4:
            a=S.isEmpty();
            if(a==1){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<"Stack is not empty"<<endl;
            }
            break;
        case 5:
            S.display();
            break;
        case 6:
            c='n';
            break;
        default:
            cout<<"Enter valid option"<<endl;

    }
    }
    return 0;
}
