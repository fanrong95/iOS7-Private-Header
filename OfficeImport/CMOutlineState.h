/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface CMOutlineState : NSObject

{

    int counter[10];

    int listId;

}



- (int)counterAtLevel:(int)arg1;

- (void)increaseCounterAtLevel:(int)arg1;

- (id)init;

- (id)initWithListId:(int)arg1;

- (int)listId;

- (void)reset;

- (void)setCounterTo:(int)arg1 atLevel:(int)arg2;



@end


