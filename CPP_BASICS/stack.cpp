#include<iostream>
using namespace std;



class Stack
{
    private:
        int top;
        int arr[5];

    public:
        Stack()
        {
            top = -1;
            for (int i = 0; i < 5; i++)
            {
                arr[i] =0;
            }
            
        }


        bool isEmpty()
        {
            if (top == -1)
                return true;
            else
                return false;
        }


        bool isFull()
        {
            if (top ==4)
                return true;
            else
                return false;
        }


        void push(int val)
        {
            if (isFull())
                cout<<"Stack Overflow\n";
                

            else{
                top++;//0
                arr[top] = val;// arr[0] = 4
            }
        }



        int pop()
        {
            if (isEmpty())
            {
                cout<<"Stack is empty";
                return 0;
            }

            else
            {
                int popValue = arr[top];
                arr[top] = 0;
                top --;
                return popValue;

                
            }

        }
        int count()
        {
            return (top + 1);
        }
            

        int peek(int pos)
        {   
            if (isEmpty())
            {
                cout<<"Stack is empty";
                return 0;
            }

            else
            {
                return arr[pos];
            }
            
        }


        void change(int pos, int val)
        {
            arr[pos] = val;
           // cout<<"Value changed at location "<<pos<<" "<<val;
        }
            
        void display()
        {
            for (int i = 4; i >=0 ; i--)
            {
                cout<<arr[i]<<endl;
            }
            
        }        





};



int main() 
{
    Stack s1;
    int option, postion, value;

    do{

        cout<<"Enter an option number, you want to perform:- \n";
        cout<<"1. Push()\n";
        cout<<"2. Pop()\n";
        cout<<"3. isEmpty()\n";
        cout<<"4. isFull()\n";
        cout<<"5. Peek()\n";
        cout<<"6. Count()\n";
        cout<<"7. Change()\n";
        cout<<"8. Display()\n";
        cout<<"9. Clear Screen()\n\n";

        cin>>option;

        switch(option){
            case 1:
                cout<<"Enter the value to push in the stack:- \n";
                cin>>value;
                s1.push(value);
                break;
            

            case 2:
                cout<<"Pop function called - Popped value is:- "<<s1.pop()<<endl;
                break;

            case 3:
                if (s1.isEmpty())
                {
                    s1.isEmpty();
                }
                else
                {
                    cout<<"Stack is not Empty";
                }
                break;

            case 4:
                if (s1.isFull())
                {
                    cout<<"Stack is Full";
                }
                else
                {
                    cout<<"Stack is not Full";
                }
                break;
            case 5:
                cout<<"Peek function called:- \nEnter a position which you want to access:- \n";
                cin>>postion;
                cout<<"Value at position:- "<<postion<<"-"<<s1.peek(postion)<<endl;
                break;
            case 6:
                cout<<"Count function called - Count is:- "<<s1.count()<<endl;
                break;

            case 7:
                cout<<"Change function called \nEnter positon and value";
                cin>>postion>>value;
                s1.change(postion,value);
                cout<<"Value changed at position "<<postion<<"is "<<value;
                break;
            case 8:
                cout<<"Display function called \n";
                cout<<"The elements in the stack are:- \n";
                s1.display();
                break;
            case 9:
                system("cls");
                break;

            default:
                cout<<"Enter a proper option number\n";
                

        }

    }while(option!=0);
    return 0;
}