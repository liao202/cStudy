

//LibData libData;

#endif /* LIB_DATA_H_ */
=======
/*
 * lib_data.h
 *
 *  Created on: 2020年7月29日
 *      Author: timmyliao
 */

#ifndef LIB_DATA_H_
#define LIB_DATA_H_
#include "lib_pojo.h"

//typedef struct{
//	Book books[100];
//	Reader readers[100];
//	Manager managers[100];
//} LibData;

typedef  struct SBookLinkNode{
	struct SBookLinkNode *head ;
	Book *data ;
	struct SBookLinkNode *next ;
}BookLinkNode;



typedef struct SReaderLinkNode{
	Reader *data ;
	struct SReaderLinkNode *next ;
}ReaderLinkNode;

typedef struct SManagerLinkNode{
	Manager *data ;
	struct SManagerLinkNode *next ;
}ManagerLinkNode;

typedef struct SReaderBookRefLinkNode{
	ReaderBookRef *data ;
	struct SReaderBookRefLinkNode *next ;
}ReaderBookRefLinkNode;

typedef struct SBorrowFlowLinkNode{
	BorrowFlow *data ;
	struct SBorrowFlowLinkNode *next ;
}BorrowFlowLinkNode;


/**
 * 全局数据仓库
 */
typedef struct{
	BookLinkNode *bookLinkNode;
	ReaderLinkNode *readerLinkNode;
	ManagerLinkNode *managerLinkNode;
	ReaderBookRefLinkNode *readerBookRefLinkNode;
	BorrowFlowLinkNode *borrowFlowLinkNode;
}GlobalLibData;



