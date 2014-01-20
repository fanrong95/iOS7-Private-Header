/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MFIMAPFetchResult, NSString;



@interface _MFIMAPFetchUnit : NSObject

{

    MFIMAPFetchResult *_expectedFetchResult;

    unsigned int _uid;

    id <MFDataConsumer> _bodyDataConsumer;

    NSString *_consumerSection;

    NSString *_fetchItem;

}



- (void)_setupExpectedFetchResult;

@property(retain, nonatomic) id <MFDataConsumer> bodyDataConsumer; // @synthesize bodyDataConsumer=_bodyDataConsumer;

@property(retain, nonatomic) NSString *consumerSection; // @synthesize consumerSection=_consumerSection;

- (id)copyFailedFetchResponse;

- (void)dealloc;

@property(copy, nonatomic) NSString *fetchItem; // @synthesize fetchItem=_fetchItem;

- (_Bool)matchesFetchResponse:(id)arg1;

@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;



@end


