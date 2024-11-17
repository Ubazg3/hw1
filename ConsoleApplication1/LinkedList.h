typedef struct linkedList
{
	int num;
	linkedList* next;

} linkedList;

void addToList(linkedList* l, int newValue);
void removeFromList(linkedList* l);