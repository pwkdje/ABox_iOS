/*
 * XADStuffItXIronHandle.h
 *
 * Copyright (c) 2017-present, MacPaw Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301  USA
 */
#import "CSBlockStreamHandle.h"

@interface XADStuffItXIronHandle:CSBlockStreamHandle
{
	uint8_t *block,*sorted;
	uint32_t *table;
	size_t currsize;

	int st4transform,fancymtf;

	unsigned int maxfreq1,maxfreq2,maxfreq3;
	unsigned int byteshift1,byteshift2,byteshift3;
	unsigned int countshift1,countshift2,countshift3;
}

-(id)initWithHandle:(CSHandle *)handle length:(off_t)length;
-(void)dealloc;

-(void)resetBlockStream;
-(int)produceBlockAtOffset:(off_t)pos;

-(void)decodeBlockWithLength:(int)blocksize;

@end
