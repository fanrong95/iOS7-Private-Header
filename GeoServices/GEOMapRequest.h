/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GEOMapRequestManager;



@interface GEOMapRequest : NSObject

{

    GEOMapRequestManager *_requestManager;

    id _completionHandler;

    _Bool _isFinished;

}



- (void)cancel;

- (void)complete;

@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;

- (void)dealloc;

- (id)initWithManager:(id)arg1;

@property(readonly, nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;



@end


