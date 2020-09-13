void deQueue() {

temp = front;

if (front == NULL) {

cout<<"Underflow"<<endl;

return;

}

else

if (temp->next != NULL) {

temp = temp->next;

cout<<"Element deleted from queue is : "<<front->data<<endl;

free(front);

front = temp;

}

}