/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PLPreheatItem.h"


@class PLImageTable;



@interface _PLDataPreheatItem : PLPreheatItem

{

    unsigned long long _thumbIndex;

    PLImageTable *_imageTable;

}



- (void)dealloc;

- (id)initWithThumbIndex:(unsigned long long)arg1 imageTable:(id)arg2;

- (void)startPreheatRequest;



@end


