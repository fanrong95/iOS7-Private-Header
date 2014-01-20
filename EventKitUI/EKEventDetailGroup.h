/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSString;



@interface EKEventDetailGroup : NSObject

{

    long long _tag;

    NSArray *_items;

    NSString *_headerTitle;

}



- (void).cxx_destruct;

- (id)cellForSubitemAtIndex:(unsigned long long)arg1;

- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;

- (id)description;

- (_Bool)hasSubitemForIndexPathRow:(unsigned long long)arg1;

@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;

- (id)initWithTag:(long long)arg1 headerTitle:(id)arg2;

- (id)itemAtIndex:(unsigned long long)arg1;

- (id)itemAtIndex:(unsigned long long)arg1 subitemIndex:(unsigned long long *)arg2;

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;

- (unsigned long long)numberOfRows;

@property(nonatomic) long long tag; // @synthesize tag=_tag;



@end


