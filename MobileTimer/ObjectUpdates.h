/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



@interface ObjectUpdates : NSObject

{

    NSMutableArray *_addedObjects;

    NSMutableArray *_removedObjects;

}



@property(readonly, nonatomic) NSMutableArray *addedObjects; // @synthesize addedObjects=_addedObjects;

- (void)dealloc;

- (id)description;

- (id)init;

@property(readonly, nonatomic) NSMutableArray *removedObjects; // @synthesize removedObjects=_removedObjects;



@end


