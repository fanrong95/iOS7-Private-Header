/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



__attribute__((visibility("hidden")))

@interface TSKSearch : NSObject

{

    _Bool _isComplete;

    NSString *_string;

    unsigned long long _options;

    id _hitBlock;

}



- (void)dealloc;

@property(copy, nonatomic) id hitBlock; // @synthesize hitBlock=_hitBlock;

- (id)initWithString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(id)arg3;

@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;

@property(nonatomic) unsigned long long options; // @synthesize options=_options;

@property(copy, nonatomic) NSString *string; // @synthesize string=_string;



@end


