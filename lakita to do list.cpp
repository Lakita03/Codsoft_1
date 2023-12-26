#include<iostream>
#include <cstring>
using namespace std;
class library
{
	public:
  void add();
  void view();
  void remove();
  char task[30];
};
   void library::add()
   {
   	int n;
   	cout<<"\nEnter the number of tasks you want to perform:- \n";
   	cin>>n;
   	cout<<"\nEnter the tasks you want to perform: \n";
    for(int i=1;i<=n;i++)
   {  
    char newtask[50];
   	cin>>newtask;
   	if (i <= n) {
        strcat(task,newtask);
        strcat(task, "\n");
        }
   }}
   void library::view()
   {
   	cout<<"\nYour Tasks are as follows:\n";
   	   	cout<<task<<"\n";
   }
   void library::remove()
   {
   	char option;
   	cout<<"Do you want to delete any task from your to do list(y/n): " ;
   	cin>>option;
   	char deletetask[70];
   	if(option == 'y' || option == 'Y')
   	{
   		cout<<"\nEnter the tasks you want to delete:- ";
   		cin.ignore();  // Clear input buffer
        cin.getline(deletetask, sizeof(deletetask));
       //cout<<"\nthe task is deleted\n";
	
	char* taskToDelete = strstr(task, deletetask);
        if (taskToDelete != NULL) {
            memmove(taskToDelete, taskToDelete + strlen(deletetask), strlen(taskToDelete + strlen(deletetask)) + 1);
            cout << "Task deleted: " << deletetask << "\n";
        } else {
            cout << "Task not found: " << deletetask << "\n";
        }}
	else{
		exit(0);	
	}
}
int main()
{
   cout<<"***Here's your to do list***";
   library l1;
   l1.add();
   l1.view();
   l1.remove();
   l1.view();

}

