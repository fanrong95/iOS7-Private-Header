/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSOperation.h"



@class NSString, SKUIClientContext;



@interface SKUIRedeemOperation : NSOperation

{

    _Bool _cameraRecognized;

    NSString *_code;

    SKUIClientContext *_clientContext;

    id _resultBlock;

}



- (void).cxx_destruct;

- (void)_applyThankYouDictionary:(id)arg1 toRedeem:(id)arg2;

- (id)_itemsForItemIdentifiers:(id)arg1;

- (id)_performRequestWithProperties:(id)arg1 error:(id *)arg2;

- (id)_redeemForSuccessDictionary:(id)arg1;

- (id)_requestPropertiesForThankYouWithURL:(id)arg1;

@property(nonatomic) _Bool cameraRecognized; // @synthesize cameraRecognized=_cameraRecognized;

@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

- (id)initWithCode:(id)arg1;

- (void)main;

@property(copy) id resultBlock; // @synthesize resultBlock=_resultBlock;



@end


