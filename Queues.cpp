#include <iostream>
#include <queue>
using namespace std;

void displayQueue(queue<string> q){
 int n = q.size();
 cout<<endl<<"The items in the queue are: ";
 for(int i=0; i<n;i++){
  cout<<q.front()<<", ";
  q.pop();
 }
 cout<<endl;
}

int main(){
 queue<string> queue1;
 int choice, flag =1;
 string dataItem;

 while( flag == 1){
 cout<<"Implementation of a Queue in a Program";
 cout<<"\n 1. Enqueue"<<"\n"
 <<" 2. Dequeue operation"<<"\n"
 <<" 3. Show the data items at the ends of the queue"<<"\n"
 <<" 4. Display the items in the queue"<<"\n"
 <<" 5. Check the size of the queue"<<"\n"
 <<" 6. Exit\n"
 <<"Enter a number to perform the operation attached to it."
 <<endl;
 cin>>choice;
 switch (choice){
 case 1: cout<<"Enter an item to be pushed into the queue:\n";
         cin>>dataItem;
         queue1.push(dataItem);
         break;
 case 2: queue1.pop();
         displayQueue(queue1);
         break;
 case 3: cout<<"Element at front is : "<<queue1.front()<<"\n";
         cout<<"Element at rear is : "<<queue1.back()<<"\n";
         break;
 case 4: displayQueue(queue1);
         cout<<endl;
         break;
 case 5:  cout<<"Size of the Queue is : "<<queue1.size();
          cout<<endl;
         break;
 case 6: flag = 0;
         break;

 }}
 return 0;
}
