/*
 * ICommander.h
 *
 *  Created on: Jan 25, 2018
 *      Author: ducvd
 */

#ifndef SPIDERVNACCEL_INTERFACE_ICOMMANDER_H_
#define SPIDERVNACCEL_INTERFACE_ICOMMANDER_H_

#include <string>

#define SPD_SUCCESS 0

class ICommander
{
public:
	virtual ~ICommander() {}

	virtual int preRequisiteCheck() = 0;	// Check whether
	virtual int extract_AllArchiveComic(std::string sPath) = 0;
	virtual int prepare_bulk_upload(std::string sExtractedComicPath) = 0;
};

#endif /* SPIDERVNACCEL_INTERFACE_ICOMMANDER_H_ */
