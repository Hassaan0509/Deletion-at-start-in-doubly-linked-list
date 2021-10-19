bool list::delEnd()
{
	node* temp = tail;
	if (head != tail)
	{
		tail->prev->next = NULL;
		tail = tail->prev;
		delete temp;
	}
	else
	{
		head = NULL;
		tail = NULL;
	}
	return 1;
}