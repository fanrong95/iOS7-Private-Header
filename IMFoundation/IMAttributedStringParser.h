/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class IMAttributedStringParserContext;



@interface IMAttributedStringParser : NSObject

{

    IMAttributedStringParserContext *_context;

}



+ (id)sharedInstance;

- (void)_preprocessWithContext:(id)arg1 string:(id *)arg2;

- (void)parseContext:(id)arg1;



@end


