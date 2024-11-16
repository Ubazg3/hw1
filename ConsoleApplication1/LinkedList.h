typedef struct linkedList
{
	int num;
	linkedList* next;

} linkedList;

void addToList(linkedList* l, int newValue);
int removeFromList(linkedList* l);