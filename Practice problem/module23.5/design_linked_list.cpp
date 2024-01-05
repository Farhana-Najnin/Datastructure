class Node {
    public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        next = NULL;
    }
};
class MyLinkedList {
public:
    int size = 0;
    Node* head = NULL;
    Node* tail = NULL;
    MyLinkedList() {

    }
    int get(int index) {
        if(index >= size)
            return -1;
        Node* temp = head;
        for(int i=0; i<index; i++)
            temp = temp->next;

        return temp->val;
    }

    void addAtHead(int val) {
        size++;
        Node* newnode = new Node(val);
        if(head == NULL)
        {
            head = tail = newnode;
            return;
        }
        newnode->next = head;
        head = newnode;
    }

    void addAtTail(int val) {
        size++;
        Node* newnode = new Node(val);
        if(head == NULL)
        {
            head = tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }

    void addAtIndex(int index, int val) {
        if(index>size)
            return;
        else if(index == size)
            addAtTail(val);
        else if(index==0)
            addAtHead(val);
        else {
            size++;
            Node* temp = head;
            Node* newnode = new Node(val);
            for(int i=0; i<index-1; i++)
                temp = temp->next;

            newnode->next = temp->next;
            temp->next = newnode;
        }
    }

    void deleteAtIndex(int index) {
        if(index>=size)
            return;
        else if(index == size-1)
        {

            if(index==0)
            {
                head=NULL;
                tail=NULL;
            }
            else
            {
                Node* temp = head;
                while(temp->next!=tail)
                    temp= temp->next;


                tail = temp;
                temp->next = NULL;
            }

        }
        else if(index==0)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        else
        {
            Node* temp = head;
            for(int i=0; i<index-1; i++)
                temp = temp->next;


            Node* deletenode = temp->next;
            temp->next = temp->next->next;
            delete deletenode;
        }
        size--;
    }
};
