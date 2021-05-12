#include<iostream>
using namespace std;

class Queue
{
    private:
        int front;
        int rear;
        int arr[5];

    public:
        Queue()
        {
            front = -1;
            rear = -1;
            for(int i =0;i<5;i++)
            {
                arr[i] =0;
            }
        }



        bool isEmpty()
        {
            if (front == -1 && rear ==-1)
                return true;
            else
                return false;
        }



        bool isFull()
        {
            if (rear == 4)
                return true;
            else
                return false;
        }



        void enqueue(int val)
        {
            if (isFull())
            {
                cout<<"QUEUE IS FULL";
                return;
            }
            else if (isEmpty())
            {
                front = rear = 0;
                arr[rear] = val;
            }
            else
            {
                rear ++;
                arr[rear] = val;
            }


        }


        int dequeue()
        {
            int x;
            if(isEmpty())
            {
                cout<<"QUEUE IS EMPTY";
                return 0;
            }


            else if(front == rear)
            {
                x = arr[front];
                arr[front] = 0;
                front = rear = -1;
                return x ;
            }


            else
            {
                x = arr[front];
                arr[front] = 0;
                front++;
                return x; 
            }


        }


        int count()
        {
            return (rear - front + 1);
        }


        void display()
        {
            cout<<"All the values of the queue are:- \n";
            for(int i =0;i<5;i++)
            {
                cout<<arr[i]<<" ";
            }
        }

};






int main() 
{
    Queue q1;

    int option;

    int value;



    do
    {
        cout<<"\nWhich operation do you want to perform(select option number). Enter 0 to exit :- \n";
        cout<<"1 - Enqueue()\n";
        cout<<"2 - Dequeue()\n";
        cout<<"3 - isEmpty()\n";
        cout<<"4 - isFull()\n";
        cout<<"5 - count()\n";
        cout<<"6 - display()\n";
        cout<<"7 - Clear Screen()\n";

        cin>>option;

        switch(option)
        {
            case 0:
                break;

            case 1:
                cout<<"Enter a value to enqueue in the queue :- ";
                cin>>value;
                q1.enqueue(value);
                break;

            case 2:
                cout<<"Dequeue operation \nDequeued value is :- "<<q1.dequeue()<<endl;
                break;

            case 3:
                if (q1.isEmpty())
                    cout<<"Queue is empty.\n";
                else
                    cout<<"Queue is not empty.\n";
                break;

            case 4:
                if(q1.isFull())
                    cout<<"Queue is full.\n";
                else
                    cout<<"Queue is not full\n";
                break;

            case 5:
                cout<<"Count operation \n Count of the items in the Queue are:-"<<q1.count()<<endl;
                break;

            case 6:
                cout<<"Display function called:- \n";
                q1.display();
                break;

            case 7:
                system("cls");
                break;
            default:
                cout<<"Enter proper option number:- \n";
                break;
                


        }

    } while (option!=0);
    
    
    return 0;
}