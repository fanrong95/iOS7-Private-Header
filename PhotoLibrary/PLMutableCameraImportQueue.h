/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



@interface PLMutableCameraImportQueue : NSObject

{

    NSMutableArray *_items;

}



- (id)currentItem;

- (void)dealloc;

- (void)dequeueImportItem;

- (id)description;

- (void)enqueueImportItem:(id)arg1;

- (id)init;



@end


