/*
 * lib_service.h
 *
 *  Created on: 2020年7月28日
 *      Author: timmyliao
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib_pojo.h"
#include "lib_service.h"
#include "lib_data.h"

void borrow(const char rId[20], const char bId[20]) {

}

void rebook(const char rId[], const char bId[]) {
}

void addReader(const char rId[], const char rName[]) {
//	libData.books[0]=book;
}

void addManger(const char mId[], const char mName[]) {
}

void addBook(const char bId[], const char bTitle[]) {
	Book book;
	strcpy(book.id, bId);
	strcpy(book.title, bTitle);
//	bookLinkNode.
	GlobalLibData *libData = getLibData();
	BookLinkNode newBookLinkNode;
	BookLinkNode *pNewBookLinkNode = &newBookLinkNode;
	pNewBookLinkNode->data = &book;
	pNewBookLinkNode->next = NULL;
//	printf("before libData->bookLinkNode addres:%d\n",libData->bookLinkNode);
	if (libData->bookLinkNode->head == NULL) {
		libData->bookLinkNode->head = pNewBookLinkNode;
		printf("add book done!,first data!%s\n",pNewBookLinkNode->data->id);
	} else {
		BookLinkNode *pTailBookLinkNode = libData->bookLinkNode->head;
		while(pTailBookLinkNode!=NULL){
			printf("cur pTailBookLinkNode:%s\n",pTailBookLinkNode->data->id);
			pTailBookLinkNode = pTailBookLinkNode->next;
		}
		pNewBookLinkNode->next = NULL;
		pTailBookLinkNode = pNewBookLinkNode;
		printf("tail pTailBookLinkNode:%s\n",pTailBookLinkNode->data->id);
//		printf("add book done!id:%s\n", libData->bookLinkNode->next->data->id);
	}
//	printf("after libData->bookLinkNode addres:%d\n",libData->bookLinkNode);
}

void showBooks() {
	GlobalLibData *libData = getLibData();
	BookLinkNode *bookLinkNode = libData->bookLinkNode->head;
//	int i=0;
	while (bookLinkNode != NULL) {
		Book *book = bookLinkNode->data;
		printf("---book name:%s,id:%s\n", book->title, book->id);
		bookLinkNode = bookLinkNode->next;
//		i++;
//		if(i>5){
//			break;
//		}
	}
}

void showBook(const char bId[]) {
}

void showReaders() {
}

void showReader(const char bId[]) {
}

void showAllBorrowRef() {
}

void showAllBorrowFlows() {
}

