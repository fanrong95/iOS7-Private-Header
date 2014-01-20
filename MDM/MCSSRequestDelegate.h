/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SSRequestDelegate.h"



@class NSTimer, SSRequest;



@interface MCSSRequestDelegate : NSObject <SSRequestDelegate>

{

    SSRequest *_request;

    id _completionBlock;

    NSTimer *_timeoutTimer;

}



- (void).cxx_destruct;

- (void)_startTimeout:(double)arg1 completionBlock:(id)arg2;

- (void)_timerDidFire:(id)arg1;

- (void)cancel;

- (void)dealloc;

- (id)initWithRequest:(id)arg1;

@property(readonly, nonatomic) SSRequest *request; // @synthesize request=_request;

- (void)request:(id)arg1 didFailWithError:(id)arg2;

- (void)requestDidFinish:(id)arg1;



@end


