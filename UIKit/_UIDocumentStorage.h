/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString, NSURL;



__attribute__((visibility("hidden")))

@interface _UIDocumentStorage : NSObject

{

    NSString *_scope;

    NSURL *_rootURL;

}



- (void)dealloc;

- (id)initWithSearchScope:(id)arg1 rootURL:(id)arg2;

@property(readonly, getter=isUbiquitous) _Bool ubiquitous;

@property(readonly) NSURL *rootURL; // @synthesize rootURL=_rootURL;



@end


