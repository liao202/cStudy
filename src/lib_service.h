
/*
 * lib_service.h
 *
 *  Created on: 2020年7月28日
 *      Author: timmyliao
 */

#ifndef LIB_SERVICE_H_
#define LIB_SERVICE_H_
#include "lib_data.h"

GlobalLibData * getLibData();
void borrow(const char rId[],const char bId[]);
void rebook(const char rId[],const char bId[]);
void addReader(const char rId[],const char rName[]);
void addManger(const char mId[],const char mName[]);
void addBook(const char bId[],const char bTitle[]);
void showBooks();
void showBook(const char bId[]);
void showReaders();
void showReader(const char bId[]);
void showAllBorrowRef();
void showAllBorrowFlows();

#endif /* LIB_SERVICE_H_ */

