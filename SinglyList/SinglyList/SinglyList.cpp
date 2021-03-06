// SinglyList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

struct node_t
{
	unsigned v;
	struct node_t* next;
};

//class list
//{
//private:
//	node *head, *tail;
//public:
//	list()
//	{
//		head = nullptr;
//		tail = nullptr;
//	}
//	void createnode(int value)
//	{
//		node *temp = new node;
//		temp->data = value;
//		temp->next = nullptr;
//		if (head == nullptr)
//		{
//			head = temp;
//			tail = temp;
//			temp = nullptr;
//		}
//		else
//		{
//			tail->next = temp;
//			tail = temp;
//		}
//	}
//	void display()
//	{
//		node *temp = new node;
//		temp = head;
//		while (temp != nullptr)
//		{
//			std::cout << temp->data << "\t";
//			temp = temp->next;
//		}
//	}
//	void insert_start(int value)
//	{
//		node *temp = new node;
//		temp->data = value;
//		temp->next = head;
//		head = temp;
//	}
//	void insert_position(int pos, int value)
//	{
//		node *pre = new node;
//		node *cur = new node;
//		node *temp = new node;
//		cur = head;
//		for (int i = 1; i < pos; i++)
//		{
//			pre = cur;
//			cur = cur->next;
//		}
//		temp->data = value;
//		pre->next = temp;
//		temp->next = cur;
//	}
//	void delete_first()
//	{
//		node *temp = new node;
//		temp = head;
//		head = head->next;
//		delete temp;
//	}
//	void delete_last()
//	{
//		node *current = new node;
//		node *previous = new node;
//		current = head;
//		while (current->next != nullptr)
//		{
//			previous = current;
//			current = current->next;
//		}
//		tail = previous;
//		previous->next = nullptr;
//		delete current;
//	}
//	void delete_position(int pos)
//	{
//		node *current = new node;
//		node *previous = new node;
//		current = head;
//		for (int i = 1; i < pos; i++)
//		{
//			previous = current;
//			current = current->next;
//		}
//		previous->next = current->next;
//	}
//	void display_even()
//	{
//		node *temp = new node;
//		temp = head;
//
//		while (temp != nullptr)
//		{
//			if (temp->data % 2 == 0)
//			{
//				std::cout << temp->data << "\t";
//				temp = temp->next;
//			}
//			else
//			{
//				temp = temp->next;
//			}
//		}
//	}
//	void display_pos(int pos)
//	{
//		node *temp = new node;
//		temp = head;
//		int x = 0;
//		while (temp != nullptr)
//		{
//			if (x == pos)
//			{
//				std::cout << temp->data << "\t";
//				break;
//			}
//			else
//			{
//				temp = temp->next;
//				x++;
//			}
//		}
//	}
//};


node_t* even_nodes(node_t **head) {

	node_t *root;
	node_t *current = *head;
	node_t *conductor;
	bool empty = true;
	root = nullptr;
	conductor = nullptr;

	while (current != nullptr) {
		if (current->v % 2 == 0) {
			if (empty) {
				root = new node_t;
				root->next = 0;
				root->v = current->v;
				conductor = root;
				empty = false;
			}
			else {
				conductor->next = new node_t;
				conductor = conductor->next;
				conductor->next = 0;
				conductor->v = current->v;
			}
			//Check if first node and remove
			if (current == *head) {
				//TODO: Remove first
			}
			//Check if last and remove
			else if (current->next == 0) {
				//TODO: Remove last
			}
			//Remove middle one
			else {
				//TODO: Remove middle
			}
			

		}
		current = current->next;
	}

	return root;
};

void outputList(node_t **head) {

	node_t* cond = *head;
	std::cout << "\nOutput list\n";
	while (cond != nullptr) {
		std::cout << cond->v << "\n";
		cond = cond->next;
	}
	printf("\n");
};

void fill(node_t** head_ref, unsigned data) {

	node_t * new_node = new node_t;

	new_node->next = NULL;
	new_node->v = data;

	if (*head_ref == NULL) {
		(*head_ref) = new_node;
		std::cout << "empty" << "\n";
	}
	else {
		std::cout << "not empty" << "\n";

		while ((*head_ref)->next != NULL) {
			(*head_ref) = (*head_ref)->next;
		}
		(*head_ref)->next = new_node;
	}
};

int main()
{


	//node_t * head_main = NULL;
	//fill(&head_main, 1);
	//fill(&head_main, 2);
	//fill(&head_main, 3);
	//outputList(&head_main);



//list obj;
//list objOut;
//list* ptr = obj;
//list** ptrptr = &ptr;
//
//obj.createnode(25);
//obj.createnode(50);
//obj.createnode(90);
//obj.createnode(40);
//
//std::cout << "\n";
//std::cout << "All nodes";
//std::cout << "\n";
//obj.display();
//std::cout << "\n\n";
//
//std::cout << "\n";
//std::cout << "Output list";
//std::cout << "\n";
//outputList(ptr);
//
//std::cout << "Node 3";
//std::cout << "\n";
//obj.display_pos(2);
//std::cout << "\n\n";
//std::cout << "Even values";
//std::cout << "\n";
//obj.display_even();
//std::cout << "\n\n";
//cout << "Insert last";
//cout << "\n";
//obj.createnode(55);
//obj.display();
//cout << "\n\n";
//cout << "Insert first";
//cout << "\n";
//obj.insert_start(50);
//obj.display();
//cout << "\n\n";
//cout << "Insert selected";
//cout << "\n";
//obj.insert_position(5, 60);
//obj.display();
//cout << "\n\n";
//std::cout << "Delete first";
//std::cout << "\n";
//obj.delete_first();
//obj.display();
//std::cout << "\n\n";
//std::cout << "Delete last";
//std::cout << "\n";
//obj.delete_last();
//obj.display();
//std::cout << "\n\n";
//std::cout << "Delete selected";
//std::cout << "\n";
//obj.delete_position(2);
//obj.display();
//std::cout << "\n\n";

	node_t *root;						
	node_t **rootroot;
	node_t *conductor;					

	root = new node_t;					
	root->next = 0;						
	root->v = 22;
	conductor = root;					
	rootroot = &root;

	if (conductor != 0) {
		while (conductor->next != 0)
			conductor = conductor->next;
	}

	conductor->next = new node_t;		
	conductor = conductor->next;		
	conductor->next = 0;				
	conductor->v = 44;

	conductor->next = new node_t;		
	conductor = conductor->next;		
	conductor->next = 0;				
	conductor->v = 55;

	conductor->next = new node_t;		
	conductor = conductor->next;		
	conductor->next = 0;				
	conductor->v = 77;

	conductor->next = new node_t;
	conductor = conductor->next;
	conductor->next = 0;
	conductor->v = 78;

	std::cout << "\nOutput initial list\n";
	outputList(&root);

	std::cout << "\nOutput even list\n";
	node_t* elist = even_nodes(&root);
	outputList(&elist);

	std::cout << "\nOutput initial list\n";
	outputList(&root);

	system("pause");
	return 0;
}


