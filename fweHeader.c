#include "fweHeader.h"
Memory*
FweHeader_create(
	Memory* head, 
	const char* filename)
{
	printf("still there\n");
	// constant stuff
	head->size = sizeof(fweHeader_data);
	head->data = malloc(head->size);
	memcpy(
		head->data,
		&fweHeader_data,
		head->size);
	printf("still there\n");
	// filename Length
	int offset = head->size;
	uint32_t filenameLen = strlen(filename);
	head->size += sizeof(uint32_t);
	head->data = realloc(
		head->data, 
		head->size);
	if(!head->data)
	{
		Error_fatal("Reallocation Failed");
	}
	memcpy(
		head->data + offset,
		&filenameLen,
		sizeof(uint32_t));
	printf("still there\n");
	// filename
	offset = head->size;
	
	head->size += filenameLen;
	head->data = realloc(
		head->data, 
		head->size);
	if(!head->data)
	{
		Error_fatal("Reallocation Failed");
	}
	memcpy(
		head->data + offset,
		filename,
		filenameLen);
	printf("still there\n");
}
