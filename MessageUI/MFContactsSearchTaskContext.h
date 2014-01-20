/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableSet, NSString;



@interface MFContactsSearchTaskContext : NSObject

{

    id <MFContactsSearchConsumer> _consumer;

    NSString *_text;

    NSMutableSet *_operations;

    NSMutableSet *_searchQueries;

}



+ (id)contextWithConsumer:(id)arg1 text:(id)arg2 operations:(id)arg3 searchQueries:(id)arg4;

@property(readonly, nonatomic) id <MFContactsSearchConsumer> consumer; // @synthesize consumer=_consumer;

- (void)dealloc;

- (_Bool)done;

@property(readonly, nonatomic) NSMutableSet *operations; // @synthesize operations=_operations;

@property(readonly, nonatomic) NSMutableSet *searchQueries; // @synthesize searchQueries=_searchQueries;

@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;



@end


