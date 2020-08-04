
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
	GlobalLibData *libData = getLibData();

	Book *book = (Book *)malloc(sizeof(Book));
	strcpy(book->id, bId);
	strcpy(book->title, bTitle);

	BookLinkNode *pNewBookLinkNode = (BookLinkNode *)malloc(sizeof(BookLinkNode));

	pNewBookLinkNode->data = book;
	pNewBookLinkNode->next = NULL;
	if (libData->bookLinkNode->data == NULL) {
		libData->bookLinkNode = pNewBookLinkNode;
		printf("add book done!,first data!%s\n",pNewBookLinkNode->data->id);
	} else {
		BookLinkNode *pTailBookLinkNode = libData->bookLinkNode;
		while(pTailBookLinkNode->next!=NULL){
			printf("next pTailBookLinkNode:%s\n",pTailBookLinkNode->data->id);
			pTailBookLinkNode = pTailBookLinkNode->next;
		}
		pTailBookLinkNode->next = pNewBookLinkNode;
		printf("tail pTailBookLinkNode:%s,head node:%s\n",pTailBookLinkNode->data->id,libData->bookLinkNode->data->id);
	}
}

void showBooks() {
	GlobalLibData *libData = getLibData();
	BookLinkNode *bookLinkNode = libData->bookLinkNode;
//	int i=0;
	while (bookLinkNode != NULL) {
		Book *book = bookLinkNode->data;
		printf("---book name:%s,id:%s\n", book->title, book->id);
		bookLinkNode = bookLinkNode->next;
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

