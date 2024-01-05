/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

class Stack
{
    //Write your code here

public:
 int sz=0;
Node *head=NULL;

    Stack()
    {
        //Write your code here


    }

    int getSize()
    {
        //Write your code here
        return sz;
    }

    bool isEmpty()
    {
        //Write your code here
        if(sz==0) return true;
        else return false;
    }

    void push(int data)
    {
        //Write your code here
        sz++;
        Node *newNode= new Node(data);

        if(head==NULL){
            head=newNode;

            return;
        }
newNode->next=head;
head=newNode;



    }

    void pop()
    {
        //Write your code here
        if (sz != 0) {
          sz--;

          Node *deleteNode;

          deleteNode = head;
          head = head->next;
          delete deleteNode;
        }
    }

    int getTop()
    {

        //Write your code here
       if(sz==0) return -1;
       else
        return head->data;
    }
};
