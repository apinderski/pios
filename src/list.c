#include <stdio.h>
#include <stdlib.h>
#include "list.h"


//Source: did with Jack //Collaborated with Austin P.
void list_add(struct list_element *head, struct list_element* ele)
{
	struct list_element* prev;
	struct list_element* temp = head;
	while(temp->next){
		prev = temp;
		temp = temp->next;	
	}
	temp->prev = prev;
	temp->next = ele;
}
//list_remove
//Source: 
void list_remove(struct list_element *head, int index_loc) 
{ 
    //index
    struct list_element* prev;
    struct list_element* temp = head;
    int counter = 0;
    while(temp->next){
		if (counter == index_loc){
			temp = prev;
			prev = temp->next;
			break;
		}
		else if(head==NULL){
			return;
		}
		else{
			counter++;
		}			
	}
} 
