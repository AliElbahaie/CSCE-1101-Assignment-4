#include "hashlists.hpp"

using namespace std;


int hashtable::hash(int key)
{
    int sum = 0;
    for(int i = 0; i < key; i++)
        sum += key;
    return sum % 10;
}


hashtable::hashtable()
{
    for (int i = 0; i < 10; i++)
        table[i] = NULL;
}

void hashtable::insert(Employee e)
{
    Node* n = new Node;
    n->key= e.getAge();
    n->value=e;
    n->next=NULL;
    
    int index = hash(e.getAge());

    if (table[index] == NULL)
      {
          table[index] = n;
      }
      else
      {
          collisions++;
          Node *temp = table[index];
          while (temp->key != e.getAge()&&temp->next!=NULL)
          {
              temp = temp->next;
          }
          temp->next=n;
      }
}
void hashtable::remove(Employee e)
{
    int pos = hash(e.getAge());
    
    Node* a = table[pos];
    Node* prev = a;
    while(a != NULL && a->key != e.getAge())
    {
        prev = a;
        a = a->next;
    }
    
    
    if(a->key == e.getAge())
    {
        Node* temp = a;
        a = a->next;
        prev->next = a;
        delete temp;
        temp = NULL;
    }
}
int hashtable::getCollisions()
{
    return (collisions/9)*100;
}
void hashtable::print()
{
    cout<<"Hash Table Using Linked List:"<<
    endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    for(int i = 0;  i < 10; i++)
    {
        Node* a = table[i];
        while(a != NULL)
        {
            cout << "Name: " << a->value.getName() <<
            endl << "Age: "          << a->value.getAge()   <<
            endl <<"Salary: "<<a->value.getSalary()<<
            endl<<"Years of Experience: "<<a->value.getExperience()<<endl;
            cout<<"=============================="<<endl;
            a = a->next;
        }
    }
    
    cout<<"Collision rate is: "<<this->getCollisions()<<"%"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
    
}

