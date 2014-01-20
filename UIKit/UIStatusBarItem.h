/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



__attribute__((visibility("hidden")))

@interface UIStatusBarItem : NSObject

{

    long long _idiom;

    int _type;

}



+ (_Bool)isItemWithTypeExclusive:(int)arg1;

+ (_Bool)itemType:(int)arg1 idiom:(long long)arg2 appearsInRegion:(int)arg3;

+ (_Bool)itemType:(int)arg1 idiom:(long long)arg2 canBeEnabledForData:(id)arg3 style:(id)arg4;

+ (id)itemWithType:(int)arg1 idiom:(long long)arg2;

+ (_Bool)typeIsValid:(int)arg1;

- (_Bool)appearsInRegion:(int)arg1;

- (_Bool)appearsOnLeft;

- (_Bool)appearsOnRight;

- (long long)compareLeftOrder:(id)arg1;

- (long long)comparePriority:(id)arg1;

- (long long)compareRightOrder:(id)arg1;

- (id)description;

@property(readonly, nonatomic) NSString *indicatorName;

- (id)initWithType:(int)arg1;

@property(readonly, nonatomic) int leftOrder;

@property(readonly, nonatomic) int priority;

@property(readonly, nonatomic) int rightOrder;

@property(readonly, nonatomic) int type; // @synthesize type=_type;

@property(readonly, nonatomic) Class viewClass;



@end


