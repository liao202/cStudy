/*
 * lib_main.c
 *
 *  Created on: 2020年7月28日
 *      Author: timmyliao
 */

#include <stdio.h>
#include <stdlib.h>
#include  "lib_pojo.h"
#include  "lib_data.h"
#include  "lib_service.h"
//#include  "lib_service_impl.c"

GlobalLibData GLOBAL_LIB_DATA;
GlobalLibData *PGLOBAL_LIB_DATA =NULL;
int main(void){
	printf("\n**********BEGIN***************\n");

	BookLinkNode bookLinkNode;
	bookLinkNode.data = NULL;
	bookLinkNode.next = NULL;

	ReaderLinkNode readerLinkNode;
	readerLinkNode.data = NULL;
	readerLinkNode.next = NULL;


	ManagerLinkNode managerLinkNode;
	managerLinkNode.data = NULL;
	managerLinkNode.next = NULL;


	ReaderBookRefLinkNode rbLinkNode;
	rbLinkNode.data = NULL;
	rbLinkNode.next = NULL;

	BorrowFlowLinkNode bfLinkNode;
	bfLinkNode.data = NULL;
	bfLinkNode.next = NULL;

	//添加图书
	addBook("b001","三国演义");
	addBook("b002","水浒传");
	addBook("b003","红楼梦");

	//添加读者
	addReader("r001","张三");
	addReader("r002","李四");
	addReader("r003","王五");

	//添加管理员
	addManger("m001","李老师");

	//借书
	borrow("r001","b002");

	showAllBorrowRef();
	showAllBorrowFlows();

	showBooks();

	printf("\n***********END***********\n");

}

GlobalLibData * getLibData(){
	if(PGLOBAL_LIB_DATA !=NULL){
		return PGLOBAL_LIB_DATA;
	}
	BookLinkNode bookLinkNode;
	bookLinkNode.head = NULL;
	bookLinkNode.next = NULL;
	bookLinkNode.data = NULL;
	GLOBAL_LIB_DATA.bookLinkNode = &bookLinkNode;

	GLOBAL_LIB_DATA.borrowFlowLinkNode = NULL;
	GLOBAL_LIB_DATA.managerLinkNode = NULL;
	GLOBAL_LIB_DATA.readerBookRefLinkNode = NULL;
	GLOBAL_LIB_DATA.readerLinkNode = NULL;

	PGLOBAL_LIB_DATA = &GLOBAL_LIB_DATA;
	return PGLOBAL_LIB_DATA;
}

