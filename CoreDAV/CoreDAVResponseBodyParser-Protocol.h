/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSError;



@protocol CoreDAVResponseBodyParser <NSObject>

@property(readonly) NSError *parserError;

- (_Bool)processData:(id)arg1 forTask:(id)arg2;



@optional

+ (_Bool)canHandleContentType:(id)arg1;

@end


