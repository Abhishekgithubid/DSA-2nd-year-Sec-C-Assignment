
/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
DoublyLinkedListNode *New = create_doubly_linked_list_node(data);
    if (!head)
    {
        head = New;
        return head;
    }
    else if (data < (head->data))
    {
        New->next = head; 
        head->prev = New;
        New->prev = NULL;
        head = New;
        return head; 
    }
    else 
    {
        DoublyLinkedListNode *temp = head;
        while ( ((temp->next) != NULL) && ((temp->next->data) <= data))
            temp = temp->next;
        
        if (temp->next != NULL)
        {
            DoublyLinkedListNode *next = temp->next;
            next->prev = New;
            New->next = next;
        }
        else 
            New->next = NULL;
            
        temp->next = New;
        New->prev = temp;
    }
    return head;
}

