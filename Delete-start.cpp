bool list::delStart()
{
	node* temp = head;
	if (temp != NULL && head != tail)
	{
		temp->next->prev = NULL;
		head = head->next;
		delete temp;
	}
	else if (head == tail)
	{
		head = NULL;
		tail = NULL;
	}
	return 1;
}