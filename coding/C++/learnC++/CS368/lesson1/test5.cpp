
// Write a function named PrintList that has one parameter of type "pointer to ListNode", that points to the first node in a linked list of integers like the one created by the code fragment given above. PrintList should print (to cout) each value in the list, one per line.

// Write a recursive function PrintReverse that has one parameter of type "pointer to ListNode", that points to the first node in a linked list of integers. PrintReverse should print (to cout) each value in the list in reverse order, one per line. 

# include <iostream>
# include <stdlib.h>

using namespace std;

struct ListNode {
  int data;
  ListNode *next; // pointer to the next node in the list
};

void PrintList (ListNode* p);
void PrintReverse (ListNode* p);

int main()
{
  ListNode* head = NULL; // head points to the list of nodes, initially empty
  int k;
  while (cin >> k)
    {
      // create a new list node containing the value read in
      ListNode* tmp = new ListNode;
      tmp->data = k;

      // attach the new node to the front of the list
      tmp->next = head;
      head = tmp;
    }
  cout << "print each value in the list: " << endl;
  PrintList(head);
  cout << "print each value in the reverse order: " << endl;
  PrintReverse(head);
}

// void PrintList (ListNode* p)
// {
//   cout << p->data << endl;
//   if (p->next != NULL)
//     {
//       p = p->next;
//       PrintList(p);
//     }
// }

void PrintList (ListNode* p)
{
  ListNode *tmp = p;
  while (tmp != NULL)
    {
      cout << tmp->data << endl;
      tmp = tmp->next;
    }
}

void PrintReverse(ListNode* p)
{
  if ( p == NULL ) return;
  PrintReverse( p->next );
  cout << p->data << endl;
}
