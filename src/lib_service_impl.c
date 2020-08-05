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

	//增加流水
	GlobalLibData *libData = getLibData();
	BorrowFlow *borrowFlow = (BorrowFlow) malloc(sizeof(BorrowFlow));

	strcpy(borrowFlow->rId, rId);
	strcpy(borrowFlow->bId, bId);

	BorrowFlowLinkNode *pNewlinkNode = (BorrowFlowLinkNode *) malloc(
			sizeof(BorrowFlowLinkNode));

	pNewlinkNode->data = borrowFlow;
	pNewlinkNode->next = NULL;
	if (libData->borrowFlowLinkNode->data == NULL) {
		libData->borrowFlowLinkNode = pNewlinkNode;
		printf("add borrowFlow done!,first data!%s\n", pNewlinkNode->data->rId);
	} else {
		BorrowFlowLinkNode *pTailLinkNode = libData->borrowFlowLinkNode;
		while (pTailLinkNode->next != NULL) {
			printf("next pTailborrowFlowLinkNode:%s\n", pTailLinkNode->data->rId);
			pTailLinkNode = pTailLinkNode->next;
		}
		pTailLinkNode->next = pNewlinkNode;
		printf("tail pTailborrowFlowLinkNode:%s,head node:%s\n",
				pTailLinkNode->data->rId, libData->borrowFlowLinkNode->data->rId);
	}
	//减少图书(修改图书状态)

	BookLinkNode *bookLinkNode = libData->bookLinkNode;

	BookLinkNode *preBookLinkNode = libData->bookLinkNode;
	while(bookLinkNode->data!=NULL){
		if(strcmp(bookLinkNode->data->id,bId)==0){
			preBookLinkNode->next=bookLinkNode->next;
			break;
		}else{
			preBookLinkNode =  bookLinkNode;
			bookLinkNode = bookLinkNode->next;
		}
	}


}

void rebook(const char rId[], const char bId[]) {
}

void addReader(const char id[], const char name[]) {
//	libData.books[0]=book;

	GlobalLibData *libData = getLibData();
	Reader *reader = (Reader *) malloc(sizeof(Reader));
	strcpy(reader->id, id);
	strcpy(reader->name, name);

	ReaderLinkNode *pNewlinkNode = (ReaderLinkNode *) malloc(
			sizeof(ReaderLinkNode));

	pNewlinkNode->data = reader;
	pNewlinkNode->next = NULL;
	if (libData->readerLinkNode->data == NULL) {
		libData->readerLinkNode = pNewlinkNode;
		printf("add book done!,first data!%s\n", pNewlinkNode->data->id);
	} else {
		ReaderLinkNode *pTailLinkNode = libData->readerLinkNode;
		while (pTailLinkNode->next != NULL) {
			printf("next pTailBookLinkNode:%s\n", pTailLinkNode->data->id);
			pTailLinkNode = pTailLinkNode->next;
		}
		pTailLinkNode->next = pNewlinkNode;
		printf("tail pTailReaderLinkNode:%s,head node:%s\n",
				pTailLinkNode->data->id, libData->readerLinkNode->data->id);
	}
}

void addManger(const char mId[], const char mName[]) {

}

void addBook(const char bId[], const char bTitle[]) {
	GlobalLibData *libData = getLibData();

	Book *book = (Book *) malloc(sizeof(Book));
	strcpy(book->id, bId);
	strcpy(book->title, bTitle);

	BookLinkNode *pNewBookLinkNode = (BookLinkNode *) malloc(
			sizeof(BookLinkNode));

	pNewBookLinkNode->data = book;
	pNewBookLinkNode->next = NULL;
	if (libData->bookLinkNode->data == NULL) {
		libData->bookLinkNode = pNewBookLinkNode;
		printf("add book done!,first data!%s\n", pNewBookLinkNode->data->id);
	} else {
		BookLinkNode *pTailBookLinkNode = libData->bookLinkNode;
		while (pTailBookLinkNode->next != NULL) {
			printf("next pTailBookLinkNode:%s\n", pTailBookLinkNode->data->id);
			pTailBookLinkNode = pTailBookLinkNode->next;
		}
		pTailBookLinkNode->next = pNewBookLinkNode;
		printf("tail pTailBookLinkNode:%s,head node:%s\n",
				pTailBookLinkNode->data->id, libData->bookLinkNode->data->id);
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
	GlobalLibData *libData = getLibData();
	ReaderLinkNode *readerLinkNode = libData->readerLinkNode;
//	int i=0;
	while (readerLinkNode != NULL) {
		Reader *reader = readerLinkNode->data;
		printf("---reader name:%s,id:%s\n", reader->name, reader->id);
		readerLinkNode = readerLinkNode->next;
	}

}

void showReader(const char bId[]) {
}

void showAllBorrowRef() {
}

void showAllBorrowFlows() {
}

