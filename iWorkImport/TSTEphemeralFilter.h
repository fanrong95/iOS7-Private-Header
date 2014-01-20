/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray;



__attribute__((visibility("hidden")))

@interface TSTEphemeralFilter : NSObject

{

    unsigned long long mFilterIndex;

    unsigned char mColumnIndex;

    NSArray *mRules;

    _Bool mEnabled;

}



+ (id)filterWithIndex:(unsigned long long)arg1 columnIndex:(unsigned char)arg2 rules:(id)arg3 enabled:(_Bool)arg4;

@property(readonly, nonatomic) unsigned char columnIndex; // @synthesize columnIndex=mColumnIndex;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=mEnabled;

- (id)filterByAddingRule:(id)arg1;

- (id)filterByRemovingRuleAtIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) unsigned long long filterIndex; // @synthesize filterIndex=mFilterIndex;

- (id)filterWithRule:(id)arg1 atIndex:(unsigned long long)arg2;

- (id)initWithIndex:(unsigned long long)arg1 columnIndex:(unsigned char)arg2 rules:(id)arg3 enabled:(_Bool)arg4;

- (id)ruleAtIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) unsigned long long ruleCount;



@end


