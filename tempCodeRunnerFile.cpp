int main()
{
    list l;
    l.push(50);
    l.push(40);
    l.push(30);
    l.push(20);
    l.push(10);

    // Create a cycle: last node points to the node with value 30
    Node* temp = l.head;
    Node* cycleNode = nullptr;
    while(temp->next != nullptr) {
        if(temp->data == 30) cycleNode = temp;
        temp = temp->next;
    }
    temp->next = cycleNode; // last node's next points to node with value 30

    // Test for cycle
    l.iscycle(); // This will print where the cycle is found

    // Do NOT call l.display() after creating a cycle, or it will loop forever!
    return 0;
}